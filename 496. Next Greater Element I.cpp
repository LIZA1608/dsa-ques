 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       int m=nums2.size();
       unordered_map<int,int>mp;
       stack<int>s;
       vector<int>ans(n);
       for(int i=m-1;i>=0;i--){
           while(!s.empty() && s.top()<=nums2[i]){
               s.pop();
           }
           if(s.empty()){
              mp[nums2[i]]=-1;
           }
           else{
                 mp[nums2[i]]=s.top();
           }
           s.push(nums2[i]);
       }
       for(int i=0;i<n;i++){
           ans[i]=mp[nums1[i]];
       }
       return ans;
    }
