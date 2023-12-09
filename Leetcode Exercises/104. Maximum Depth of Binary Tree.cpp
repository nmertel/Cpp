#include <iostream>

/*  Given the root of a binary tree, return its maximum depth.
    A binary tree's maximum depth is the number of nodes along the longest path from the root node down 
    to the farthest leaf node.

Example 1:

    Input: root = [3,9,20,null,null,15,7]
    Output: 3

Example 2:

    Input: root = [1,null,2]
    Output: 2   */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor with initializer list
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) : val(val), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        int ans = std::max(left, right) + 1;

        return ans;
    }
};

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Find the maximum depth
    Solution s;
    int depth = s.maxDepth(root);

    // Print the output
    std::cout << "Maximum depth: " << depth << std::endl;

    return 0;
}