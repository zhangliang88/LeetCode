#include "LeetCode.hpp"

/*
375. Guess Number Higher or Lower II
Medium

We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked.
Every time you guess wrong, I'll tell you whether the number I picked is higher or lower.
However, when you guess a particular number x, and you guess wrong, you pay $x. You win the game when you guess the number I picked.
Example:

n = 10, I pick 8.

First round:  You guess 5, I tell you that it's higher. You pay $5.
Second round: You guess 7, I tell you that it's higher. You pay $7.
Third round:  You guess 9, I tell you that it's lower. You pay $9.

Game over. 8 is the number I picked.

You end up paying $5 + $7 + $9 = $21.

Given a particular n ≥ 1, find out how much money you need to have to guarantee a win.
Tags: 
    1. Dynamic Programming
    2. Minimax

Similar Questions:
    1. Flip Game II
    2. Guess Number Higher or Lower
    3. Can I Win
    4. Find K Closest Elements

Hint 1:
The best strategy to play the game is to minimize the maximum loss you could possibly face. Another strategy is to minimize the expected loss. Here, we are interested in the first scenario.

Hint 2:
Take a small example (n = 3). What do you end up paying in the worst case?

Hint 3:
Check out this article if you're still stuck.

Hint 4:
The purely recursive implementation of minimax would be worthless for even a small n. You MUST use dynamic programming.

Hint 5:
As a follow-up, how would you modify your code to solve the problem of minimizing the expected loss, instead of the worst-case loss?

*/

class Solution {
public:
    int getMoneyAmount(int n) {
        
    }
};

TEST_CASE("guess-number-higher-or-lower-ii", "[375][Medium][dynamic-programming][minimax]") {
    //TODO
    CHECK(true);
}
