#include "LeetCode.hpp"

/*
191. Number of 1 Bits
Easy

Write a function that takes an unsigned integer and return the number of '1'
bits it has (also known as the Hamming weight).

Example 1:
    Input: 00000000000000000000000000001011
    Output: 3
    Explanation: The input binary string 00000000000000000000000000001011 has a
total of three '1' bits.

Example 2:
    Input: 00000000000000000000000010000000
    Output: 1
    Explanation: The input binary string 00000000000000000000000010000000 has a
total of one '1' bit.

Example 3:
    Input: 11111111111111111111111111111101
    Output: 31
    Explanation: The input binary string 11111111111111111111111111111101 has a
total of thirty one '1' bits.

Note:

Note that in some languages such as Java, there is no unsigned integer type. In
this case, the input will be given as signed integer type and should not affect
your implementation, as the internal binary representation of the integer is the
same whether it is signed or unsigned. In Java, the compiler represents the
signed integers using 2's complement notation. Therefore, in Example 3 above the
input represents the signed integer -3.

Follow up:
If this function is called many times, how would you optimize it?

Tags:
    1. Bit Manipulation

Similar Questions:
    1. Reverse Bits
    2. Power of Two
    3. Counting Bits
    4. Binary Watch
    5. Hamming Distance
    6. Binary Number with Alternating Bits
    7. Prime Number of Set Bits in Binary Representation

*/

class Solution {
   public:
    int hammingWeight(uint32_t n) {
        int i = 0;
        for (; n != 0; n &= (n - 1), ++i) {
        }
        return i;
    }
};

TEST_CASE("number-of-1-bits", "[191][Easy][bit-manipulation]") {
    Solution s;
    CHECK(s.hammingWeight(0b0) == 0);
    CHECK(s.hammingWeight(0b1011) == 3);
    CHECK(s.hammingWeight(0b10000000) == 1);
    CHECK(s.hammingWeight(0b10000000000000000000000000000000) == 1);
    CHECK(s.hammingWeight(0b11111111111111111111111111111101) == 31);
    CHECK(s.hammingWeight(0b11111111111111111111111111111111) == 32);
}
