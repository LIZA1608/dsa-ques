vector<int> reverseLevelOrder(Node *root)
{
   vector<int>ans;
   if(root==NULL){
       return ans;
   }
   stack<int>s;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       Node* node=q.front();
       q.pop();
       s.push(node->data);
       if(node->right!=NULL){
           q.push(node->right);
       }
       if(node->left!=NULL){
           q.push(node->left);
       }
       
   }
   while(!s.empty()){
       ans.push_back(s.top());
       s.pop();
   }
   return ans;
}
