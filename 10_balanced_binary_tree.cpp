//LEETCODE 110. Balanced Binary Tree
//Given a binary tree, determine if it is height-balanced
//HIGHT BALANCED--> abs(leftH-rightH)<=1

//BRUTE FORCE
//TC->O(N*N)

class Solution {
public:
    int h(TreeNode* root){
        if(root==NULL) return 0;

        int lh=h(root->left);
        int rh=h(root->right);

        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        //brute force

        if(root==NULL) return true;
        
        int leftH=h(root->left);
        int rightH=h(root->right);

        if(abs(leftH-rightH)>1) return false;

        if(isBalanced(root->left)==false)return false;
        if(isBalanced(root->right)==false)return false;

        return true;
    }
};

//OPTIMISED
////TC->O(N)

class Solution {
public:
    //OPTIMISED
    int f(TreeNode* root){
        if(root==NULL) return 0;

        int lh=f(root->left);
        if(lh<0)return -1;
        int rh=f(root->right);
        if(rh<0)return -1;

        if(abs(lh-rh)>1)return -1;

        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        int res=f(root);
        if(res==-1) return false;
        return true;
    }
};


 
