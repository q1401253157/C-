
preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return NULL;
        int rootvalue = preorder[0];
        int line =0;
        for (int i = 0;inorder[i]!=rootvalue;i++,line++){}
        vector<int> pleft(preorder.begin()+1,preorder.begin()+line+1);
        vector<int> pright(preorder.begin()+line+1,preorder.end());
        vector<int> ileft(inorder.begin(),inorder.begin()+line);
        vector<int> iright(inorder.begin()+line+1,inorder.end());
        TreeNode *root = new TreeNode(rootvalue);
        root->left = buildTree(pleft,ileft);
        root->right = buildTree(pright,iright);
        return root;

    }
};