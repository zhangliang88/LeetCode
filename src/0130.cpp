#include "LeetCode.hpp"

/*
130. Surrounded Regions
Medium

Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.
A region is captured by flipping all 'O's into 'X's in that surrounded region.
Example:

X X X X
X O O X
X X O X
X O X X

After running your function, the board should be:

X X X X
X X X X
X X X X
X O X X

Explanation:
Surrounded regions shouldn’t be on the border, which means that any 'O' on the border of the board are not flipped to 'X'. Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. Two cells are connected if they are adjacent cells connected horizontally or vertically.

Tags: 
    1. Depth-first Search
    2. Breadth-first Search
    3. Union Find

Similar Questions:
    1. Number of Islands
    2. Walls and Gates

*/

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
    }
};

TEST_CASE("surrounded-regions", "[130][Medium][depth-first-search][breadth-first-search][union-find]") {
    //TODO
    CHECK(true);
}

