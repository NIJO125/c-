/*Input : 707069
Output : It is a duck number.
Explanation: 707069 does not contains zeros at the beginning.

Input : 02364
Output : It is not a duck number.
Explanation: in 02364 there is a zero at the beginning of the number.*/
#include<iostream>
using namespace std;
bool check(string num)
{
  int i=0,n=num.length();
  while(i<n && num[i]=='0')
    i++;
  while(i<n){
    if(num[i]=='0')
      return true;
    i++;
  }
  return false;
}
int main(void){
  string num;
  cout<<"Enter your String";
  cin>>num;
  if(check(num))
    cout<<"The number is Duck number";
  else
    cout<<"The number is not a Duck number";
  return 0;
  
}