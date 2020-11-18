for loop in c++

#include<iostream>
using namespace std;
int main()
{
  for(int a=0,b=10,c=20;(a+b+c<100);c--,b++,a+=c)
  std::cout<<a<<" "<<b<<" "<<c;
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
 for(;;)
 std::cout<<"Never ending loops";
 return 0;
}



#include<iostream>
using namespace std;
int main()
{
  int i=20;
 while(i<30){
   std::cout<<"Times"<<"\n";
   i++;
 }
 return 0;
}


