#include "LeetCode.hpp"

/*
744. Find Smallest Letter Greater Than Target
Easy

Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

Letters also wrap around.  For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

Examples:

Input:
letters = ["c", "f", "j"]
target = "a"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "c"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "d"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "g"
Output: "j"

Input:
letters = ["c", "f", "j"]
target = "j"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "k"
Output: "c"

Note:

letters has a length in range [2, 10000].
letters consists of lowercase letters, and contains at least 2 unique letters.
target is a lowercase letter.

Tags: 
    1. Binary Search

Hint 1:
Try to find whether each of 26 next letters are in the given string array.

*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
    }
};

TEST_CASE("find-smallest-letter-greater-than-target", "[744][Easy][binary-search]") {
    //TODO
    CHECK(true);
}

