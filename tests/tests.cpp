#include <cassert>
#include <iostream>
#include <chrono>

#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"
#include "conversions/Utils.hpp"
#include "conversions/StandardTypes.hpp"

#include <openssl/sha.h>

#include "math/Vec3.hpp"

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
    std::vector<uint8_t> mc_string = MCString::to_bytes("Hello World!");
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
    int number = 154545545;
    std::vector<uint8_t> vec = StandardTypes::to_bytes<int>(number);
    uint8_t* vec_ptr = vec.data();
    int converted = StandardTypes::from_bytes<int>(vec_ptr);
    assert(converted == number);

    float fraction = 3.14159265;
    std::vector<uint8_t> vec2 = StandardTypes::to_bytes<float>(fraction);
    uint8_t* vec2_ptr = vec2.data();
    float converted2 = StandardTypes::from_bytes<float>(vec2_ptr);
    assert(converted2 == fraction);

    uint8_t byte = 12;
    std::vector<uint8_t> vec3 = StandardTypes::to_bytes<uint8_t>(byte);
    uint8_t* vec3_ptr = vec3.data();
    uint8_t converted3 = StandardTypes::from_bytes<uint8_t>(vec3_ptr);
    assert(converted3 == byte);

    int64_t big_num = 398726378263;
    std::vector<uint8_t> vec4 = StandardTypes::to_bytes<int64_t>(big_num);
    uint8_t* vec4_ptr = vec4.data();
    int64_t converted4 = StandardTypes::from_bytes<int64_t>(vec4_ptr);
    assert(converted4 == big_num);
}

void test_vec3()
{
    Vec3i vec(1, 1, 1);
    assert(vec.scale(5) == Vec3i(5, 5, 5));
    assert(vec.length() == std::sqrt(3));
    assert(vec + Vec3i(0, 1, 2) == Vec3i(1, 2, 3));
    assert(vec.add(Vec3i(0, 1, 2)) == Vec3i(1, 2, 3));
    assert(vec.dot(Vec3i(1, 2, 3)) == (1 + 2 + 3));
    assert(Vec3i(1, 0, 0).cross(Vec3i(0, 2, 0)) == Vec3i(0, 0, 2));
    assert(Vec3i(1, 0, 0).normalize() == Vec3i(1, 0, 0));
    assert(Vec3d(1.0, 0, 0).normalize() == Vec3d(1, 0, 0));
    std::cout << vec.to_string() << std::endl;
}


int main() {
    test_VarInt();
    test_MCString();
    test_SHA1_formatting();
    test_standard_type_conversions();
    test_vec3();
    return 0;
}