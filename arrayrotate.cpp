#include<iostream>
using namespace std; 
void rotate(int arr[],int n){
  int x=arr[n-1],i;
  for(i=n-i;i>0;i--)
  arr[i]=arr[i-1];
  arr[0]=x;
}
int main(){
  int arr[]={1,2,3,4,5},i;
  int n=sizeof(arr)/sizeof(arr[0]);
  std::cout<<"given array is"<<endl;
  for(i =0;i<n;i++)
  std::cout<<arr[i];

  rotate(arr,n);
std::cout<<"array after rotation is "<<endl;
  for(i=0;i<n;i++)
  std::cout<<arr[i];
  return 0;


}
