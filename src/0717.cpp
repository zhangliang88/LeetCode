#include "LeetCode.hpp"

/*
717. 1-bit and 2-bit Characters
Easy

We have two special characters. The first character can be represented by one bit 0. The second character can be represented by two bits (10 or 11).  
Now given a string represented by several bits. Return whether the last character must be a one-bit character or not. The given string will always end with a zero.
Example 1:

Input: 
bits = [1, 0, 0]
Output: True
Explanation: 
The only way to decode it is two-bit character and one-bit character. So the last character is one-bit character.

Example 2:

Input: 
bits = [1, 1, 1, 0]
Output: False
Explanation: 
The only way to decode it is two-bit character and two-bit character. So the last character is NOT one-bit character.

Note:
1 <= len(bits) <= 1000.
bits[i] is always 0 or 1.

Tags: 
    1. Array

Similar Questions:
    1. Gray Code

Hint 1:
Keep track of where the next character starts.  At the end, you want to know if you started on the last bit.

*/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
    }
};

TEST_CASE("1-bit-and-2-bit-characters", "[717][Easy][array]") {
    //TODO
    CHECK(true);
}

