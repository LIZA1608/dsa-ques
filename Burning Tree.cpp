 Node* create(Node* root,int target,map<Node*,Node*>&NodetoParent){
      Node *res=NULL;
      queue<Node*>q;
      q.push(root);
      NodetoParent[root]=NULL;
      while(!q.empty()){
          Node *front=q.front();
          q.pop();
          if(front->data==target){
              res=front;
          }
          if(front->left){
              NodetoParent[front->left]=front;
              q.push(front->left);
          }
          if(front->right){
              NodetoParent[front->right]=front;
              q.push(front->right);
          }
      }
      return res;
  }
  int burntree(Node* targetnode,map<Node*,Node*>&Nodetoparent){
      map<Node*,bool>vis;
      queue<Node*>q;
      q.push(targetnode);
      vis[targetnode]=true;
      int ans=0;
      while(!q.empty()){
          int size=q.size();
          bool flag=0;
          for(int i=0;i<size;i++){
              Node* front=q.front();
              q.pop();
              if(front->left && !vis[front->left]){
                  flag=1;
                  q.push(front->left);
                  vis[front->left]=1;
              }
              if(front->right && !vis[front->right]){
                  flag=1;
                  q.push(front->right);
                  vis[front->right]=1;
              }
              if(Nodetoparent[front] && !vis[Nodetoparent[front]]){
                  flag=1;
                  q.push(Nodetoparent[front]);
                  vis[Nodetoparent[front]]=1;
              }
          }
          if(flag==1){
              ans++;
          }
      }
      return ans;
  }
    int minTime(Node* root, int target) 
    {
        map<Node*,Node*>Nodetoparent;
        Node* targetnode=create(root,target,Nodetoparent);
        int ans=burntree(targetnode,Nodetoparent);
        return ans;
    }
