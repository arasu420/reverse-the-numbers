#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a,b,c=0;
  cout<<"Enter the a value :"<<endl;
  cin>>a;
  while(a>0)
  {
      b=a%10;
      c=c*10+b;
      a=a/10; 
  }
  cout<<c;
 return 0;
}
