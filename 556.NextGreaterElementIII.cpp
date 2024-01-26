string nextper(string a){
string w;
int n=a.length();
int ind=-1;
for(int i=n-2;i>=0;i--){
    if(a[i]<a[i+1]){
          ind=i;
          break;
    }
}
if(ind==-1){
    reverse(a.begin(),a.end());
    return a;
}
for(int i=n-1;i>=0;i--){
    if(a[i]>a[ind]){
        swap(a[i],a[ind]);
        break;
    }
}
reverse(a.begin()+ind+1,a.end());
return a;
}
    int nextGreaterElement(int n) {
       string ans=to_string(n);
       string t=nextper(ans);
       int a=stoll(t);
       if(a<=n) return -1;
       return a;

    }
