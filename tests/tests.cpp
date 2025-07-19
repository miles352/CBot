#include <cassert>
#include <iostream>
#include <chrono>

#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"
#include "conversions/Utils.hpp"
#include "conversions/StandardTypes.hpp"

#include <openssl/sha.h>

void test_VarInt()
{
    assert(VarInt::from_int(0) == std::vector<uint8_t>{0x00});
    assert(VarInt::from_int(1) == std::vector<uint8_t>{0x01});
    assert(VarInt::from_int(2) == std::vector<uint8_t>{0x02});
    assert(VarInt::from_int(127) == std::vector<uint8_t>{0x7f});
    assert(VarInt::from_int(128) == (std::vector<uint8_t>{0x80, 0x01}));
    assert(VarInt::from_int(255) == (std::vector<uint8_t>{0xff, 0x01}));
    assert(VarInt::from_int(25565) == (std::vector<uint8_t>{0xdd, 0xc7, 0x01}));
    assert(VarInt::from_int(2097151) == (std::vector<uint8_t>{0xff, 0xff, 0x7f}));
    assert(VarInt::from_int(2147483647) == (std::vector<uint8_t>{0xff, 0xff, 0xff, 0xff, 0x07}));
    assert(VarInt::from_int(-1) == (std::vector<uint8_t>{0xff, 0xff, 0xff, 0xff, 0x0f}));
    assert(VarInt::from_int(-2147483648) == (std::vector<uint8_t>{0x80, 0x80, 0x80, 0x80, 0x08}));

    uint8_t* x = new uint8_t[]{0x80, 0x80, 0x80, 0x80, 0x08};
    assert(VarInt::from_array(x, nullptr) == -2147483648);

    uint8_t* y = new uint8_t[]{162, 0x00};
    assert(VarInt::from_array(y, nullptr) == 34);
}

void test_MCString()
{
    std::vector<uint8_t> mc_string = MCString::from_string("Hello World!");
    uint8_t* ptr = mc_string.data();
    std::string normal_string = MCString::from_array(ptr);
    assert(normal_string == "Hello World!");
}

void test_SHA1_formatting()
{
    uint8_t hash[SHA_DIGEST_LENGTH];
    uint8_t test1[] = "Notch";
    SHA1(test1, sizeof(test1) - 1, hash);
    std::string converted = Utils::SHA1_to_formatted(hash);
    assert(converted == "4ed1f46bbe04bc756bcb17c0c7ce3e4632f06a48");

    uint8_t test2[] = "jeb_";
    SHA1(test2, sizeof(test2) - 1, hash);
    converted = Utils::SHA1_to_formatted(hash);
    assert(converted == "-7c9d5b0044c130109a5d7b5fb5c317c02b4e28c1");

    uint8_t test3[] = "simon";
    SHA1(test3, sizeof(test3) - 1, hash);
    converted = Utils::SHA1_to_formatted(hash);
    assert(converted == "88e16a1019277b15d58faf0541e11910eb756f6");
}

void test_standard_type_conversions()
{
    int number = 129999995;
    std::vector<uint8_t> vec = StandardTypes::to_array<int>(number);
    uint8_t* vec_ptr = vec.data();
    int converted = StandardTypes::from_array<int>(vec_ptr);
    assert(converted == number);

    float fraction = 3.14159265;
    std::vector<uint8_t> vec2 = StandardTypes::to_array<float>(fraction);
    uint8_t* vec2_ptr = vec2.data();
    float converted2 = StandardTypes::from_array<float>(vec2_ptr);
    assert(converted2 == fraction);
}


int main() {
    test_VarInt();
    test_MCString();
    test_SHA1_formatting();
    return 0;
}