#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cout<<"Enter your string to Reverse:";
  cin>>str;
  reverse(str.begin(),str.end());
  cout<<"Your String after reverseing is :"<<str;
  return 0;

}