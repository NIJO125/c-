#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,6,8,7,9,2,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  cout<<"The array after sorting is";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

  return 0;  
    
  }