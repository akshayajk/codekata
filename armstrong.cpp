#include <iostream>
using namespace std;

int main()
{
  int n, num,rem,sum=0,digit;
  cout<< "Enter a positive  integer: ";
  cin>> n;

  num=n;

  while(num!=0)
  {
      digit=num%10;
      sum=sum+digit * digit * digit;
      num=num/10;
  }

  if(sum==n)
    cout<<n<<" is an Armstrong number.";
  else
    cout <<n<<" is not an Armstrong number.";

  return 0;
}
