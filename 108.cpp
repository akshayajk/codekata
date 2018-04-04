#include<iostream>
using namespace std;
int main()
{
int a,b,c,sum = 0;
cout<<"Enter the A,B and C values : "<<endl;
cin>>a>>b>>c;
sum =(c*(2*a+(c-1)*b))/2;
cout<<"Sum of the A.P series is : "<<sum<<endl;
return 0;
}
