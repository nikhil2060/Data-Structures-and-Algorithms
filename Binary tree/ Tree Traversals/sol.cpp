void preOrder(TreeNode *root, vector<int>&ans)
{
    if(root == NULL) return;

    ans.push_back(root->data);
    preOrder(root->left,ans);
    preOrder(root->right,ans);
}

void inOrder(TreeNode *root, vector<int>&ans)
{
    if(root==NULL) return;

    inOrder(root->left,ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);

}

void postOrder(TreeNode *root, vector<int>&ans)
{
    if(root==NULL) return;

    postOrder(root->left,ans);
    postOrder(root->right,ans);
    ans.push_back(root->data);

}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    
    vector<vector<int>>main;
    vector<int>ans;

    inOrder(root,ans);
    main.push_back(ans);
    ans.clear();

    preOrder(root,ans);
    main.push_back(ans);
    ans.clear();

    postOrder(root, ans);
    main.push_back(ans);
    ans.clear();

    return main;
    
}