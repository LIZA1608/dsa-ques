 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      if(node==NULL) return ans;
      q.push(node);
      while(!q.empty()){
          Node* node=q.front();
          ans.push_back(node->data);
          q.pop();
          if(node->left!=NULL){
              q.push(node->left);
          }
          if(node->right!=NULL){
              q.push(node->right);
          }
      }
      return ans;
    }
