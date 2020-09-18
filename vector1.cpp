#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> linna{1,2,3,4,5};
  vector<int> lini;
  for(int i=0;i<linna.size();i++)
  lini.push_back(linna[i]);
  cout<<"Old vector Element are:";
  for(int i=0;i<linna.size();i++)
  cout<<linna[i]<<endl;
  cout<<"The Vector Element are:";
  for(int i=0;i<lini.size();i++)
  cout<<lini[i]<<endl;
  linna[3]=7;
  cout<<"Values:"<<linna[3]<<endl;
  cout<<"values:"<<lini[3]<<endl;
}