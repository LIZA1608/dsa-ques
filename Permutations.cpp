#include <bits/stdc++.h> 
void solve(vector<vector<int>>&ans,vector<int>vec,int freq[],vector<int>temp){
    if(temp.size()==vec.size()){
        ans.push_back(temp);
        return;
    }
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(!freq[i]){
            temp.push_back(vec[i]);
            freq[i]=1;
           solve(ans,vec,freq,temp);
           freq[i]=0;
           temp.pop_back();
        }
    }
}
vector<vector<int>> permutations(vector<int> &vec, int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>temp;
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=0;
    }
    solve(ans,vec,freq,temp);
    return ans;

}
