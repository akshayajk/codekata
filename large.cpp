#include <iostream>

using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the input";
  cin>>a;
  cin>>b;
  cin>>c;
  if(a>b&&a>c)
  {
      cout<<"a is biggest number";
  }
  else if(b>c)
  {
      cout<<" b is biggest number";
  }
  else
  {
      cout<<"c is biggest number";
  }
}
