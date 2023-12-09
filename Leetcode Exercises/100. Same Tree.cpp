#include <iostream>

// Define the binary tree node structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Define the solution class
class Solution {
public:
    // Function to compare two binary trees
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Check for both trees being empty
        if (!p && !q) {
            return true;
        }

        // Check for one being empty while the other isn't
        if (!p || !q) {
            return false;
        }

        // Compare values and recursively check left and right subtrees
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main() {
    // Initialize root nodes for p and q
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    // Create an instance of the solution class
    Solution s;

    // Check if the trees are identical
    bool result = s.isSameTree(p, q);

    // Print the result
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}