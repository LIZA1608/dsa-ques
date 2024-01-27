class Solution {
  public:
  int res=0;
  int height(Node *root){
      if(root==NULL){
          return 0;
      }
      int l=height(root->left);
      int r=height(root->right);
      int temp=1+max(l,r);
      res=max(res,1+l+r);
      return temp;
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        height(root);
        return res;
    }
};
