#include "LeetCode.hpp"

/*
106. Construct Binary Tree from Inorder and Postorder Traversal
Medium

Given inorder and postorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.
For example, given

inorder = [9,3,15,20,7]
postorder = [9,15,7,20,3]
Return the following binary tree:

    3
   / \
  9  20
    /  \
   15   7

Tags: 
    1. Array
    2. Tree
    3. Depth-first Search

Similar Questions:
    1. Construct Binary Tree from Preorder and Inorder Traversal

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
    }
};

TEST_CASE("construct-binary-tree-from-inorder-and-postorder-traversal", "[106][Medium][array][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

