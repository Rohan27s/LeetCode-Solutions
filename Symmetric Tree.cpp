class Solution {
public:
    bool check(TreeNode * lefft, TreeNode * rigght)
    {
        if(lefft==nullptr and rigght==nullptr)
            return true;
        if(lefft==nullptr or rigght==nullptr)
            return false;
        if(lefft->val!=rigght->val)
            return false;
        return check(lefft->left,rigght->right) and check(lefft->right, rigght->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
        return check(root->left,root->right);
        
    }
};
