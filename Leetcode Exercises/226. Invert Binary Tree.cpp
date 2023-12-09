#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor with initializer list
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) : val(val), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return root;
        std::swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

    void printTree(TreeNode* root) {
        if (!root) {
            return;
        }

        // Pre-order traversal to print the values in correct order
        std::cout << root->val << " ";
        printTree(root->left);
        printTree(root->right);
    }
};

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    Solution s;

    // Invert the tree
    s.invertTree(root);

    // Print the inverted tree
    s.printTree(root);

    std::cout << std::endl;

    return 0;
}