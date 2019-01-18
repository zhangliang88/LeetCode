#include "LeetCode.hpp"

/*
730. Count Different Palindromic Subsequences
Hard

Given a string S, find the number of different non-empty palindromic subsequences in S, and return that number modulo 10^9 + 7.

A subsequence of a string S is obtained by deleting 0 or more characters from S.

A sequence is palindromic if it is equal to the sequence reversed.

Two sequences A_1, A_2, ... and B_1, B_2, ... are different if there is some i for which A_i != B_i.

Example 1:

Input: 
S = 'bccb'
Output: 6
Explanation: 
The 6 different non-empty palindromic subsequences are 'b', 'c', 'bb', 'cc', 'bcb', 'bccb'.
Note that 'bcb' is counted only once, even though it occurs twice.

Example 2:

Input: 
S = 'abcdabcdabcdabcdabcdabcdabcdabcddcbadcbadcbadcbadcbadcbadcbadcba'
Output: 104860361
Explanation: 
There are 3104860382 different non-empty palindromic subsequences, which is 104860361 modulo 10^9 + 7.

Note:
The length of S will be in the range [1, 1000].
Each character S[i] will be in the set {'a', 'b', 'c', 'd'}.

Tags: 
    1. String
    2. Dynamic Programming

Similar Questions:
    1. Longest Palindromic Subsequence

Hint 1:
Let dp(i, j) be the answer for the string T = S[i:j+1] including the empty sequence. The answer is the number of unique characters in T, plus palindromes of the form "a_a", "b_b", "c_c", and "d_d", where "_" represents zero or more characters.

*/

class Solution {
public:
    int countPalindromicSubsequences(string S) {
        
    }
};

TEST_CASE("count-different-palindromic-subsequences", "[730][Hard][string][dynamic-programming]") {
    //TODO
    CHECK(true);
}

