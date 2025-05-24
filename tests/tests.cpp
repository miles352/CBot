#include <cassert>
#include <iostream>
#include <chrono>

#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"

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
    uint8_t x[] = {0x80, 0x80, 0x80, 0x80, 0x08};
    // assert(VarInt::from_array({0x80, 0x80, 0x80, 0x80, 0x08}) == -2147483648);
}

void test_MCString()
{
    std::vector<uint8_t> mc_string = MCString::from_string("Hello World!");
    uint8_t* ptr = mc_string.data();
    std::string normal_string = MCString::from_array(ptr);
}


int main() {
    test_VarInt();
    test_MCString();
    return 0;
}