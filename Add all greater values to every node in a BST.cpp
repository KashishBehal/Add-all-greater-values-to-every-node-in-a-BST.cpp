Node* solve(Node *root , int &ans){
    if(root==NULL){
        return NULL ;
    }
    
    
    solve(root->right , ans);
    ans=ans+root->data;
    root->data=ans;
    solve(root->left , ans);
    return root;
    
}
Node* modify(Node *root)
{
    // Your code here
    
    int ans=0;
    solve(root , ans);
    
}
