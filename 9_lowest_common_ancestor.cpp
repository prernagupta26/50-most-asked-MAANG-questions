//LEETCODE: 235. Lowest Common Ancestor of a Binary Search Tree
//Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.
//The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case
        if(root==NULL or root==p or root==q) return root;

        TreeNode* lefti=lowestCommonAncestor(root->left,p,q);
        TreeNode* righti=lowestCommonAncestor(root->right,p,q);

        if(lefti==NULL) return righti;
        else if(righti==NULL) return lefti;

        else return root;
    }
};