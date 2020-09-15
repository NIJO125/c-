#include <iostream>
using namespace std;
int main(){
  char arr[20];
  cout<<"Enter your name:";
  cin.getline(arr,20);
  cout<<"your name is:"<<arr;
  return 0;
}