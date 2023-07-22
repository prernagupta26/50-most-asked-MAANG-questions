//LEETCODE 104:  Maximum Depth of Binary Tree
//Given the root of a binary tree, return its maximum depth. A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

class Solution {
public:
    int maxDepth(TreeNode* root) {
        //max height//we have to traverse all the nodes

        if(root==NULL)return 0;

        int leftH=maxDepth(root->left);
        int rightH=maxDepth(root->right);

        return 1+max(leftH,rightH);
    }
};