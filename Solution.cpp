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

    // Helper function to recursively find the LCA
    TreeNode* findy(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return NULL;  // Base case: null node

        if (root == p || root == q) return root;  // If current node is p or q, return it

        TreeNode* left = NULL;
        TreeNode* right = NULL;

        // Search in left subtree
        if (root->left) {
            left = findy(root->left, p, q);
        }

        // Search in right subtree
        if (root->right) {
            right = findy(root->right, p, q);
        }

        // If both left and right are non-null, this is the LCA
        if (left && right) return root;

        // Otherwise, return whichever side is non-null
        if (left) return left;
        if (right) return right;

        return NULL;  // If neither found
    }

    // Public function to start LCA search
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findy(root, p, q);
    }
};
