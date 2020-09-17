#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s={"gfg"};
  bool val=next_permutation(s.begin(),s.end());
  if(val==false)
  cout<<"No words possible";
  else
  cout<<s;
  return 0;
}