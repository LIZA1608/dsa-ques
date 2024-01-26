 vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
        stack<int>s;
        vector<int>ans(n);
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty() && s.top()<=arr[i%n]){
                s.pop();
            }
            if(i<n){
                if(s.empty()){
                    ans[i%n]=-1;
                }
                else{
                    ans[i%n]=s.top();
                }
            }
            s.push(arr[i%n]);
        }
        return ans;
    }
