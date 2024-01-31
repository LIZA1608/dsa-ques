#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r){
    int i=l;
    int j=m+1;
    int k=0;
    int temp[r-l+1];
    while(i<=m && j<=r){
        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=m){
        temp[k]=a[i];
        k++;i++;
    }
    while(j<=r){
        temp[k]=a[j];
        k++;j++;
    }
    k=0;
    for(int i=l;i<=r;i++){
        a[i]=temp[k];
        k++;
    }
    
}
void mergesort(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
int main(){
  int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
mergesort(a,0,n-1);
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
}
