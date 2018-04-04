#include <iostream>
using namespace std;

int main() {
	int n1,n2,temp=0,temp2;
	cout<<"Enter two numbers \n";
	cin>>n1>>n2;
	while(n2!=0)
	{
		temp=(temp*10)+(n2%10);
		n2=n2/10;
	}
	while(temp!=0)
	{
		temp2=temp%10;
		n1=(n1*10)+temp2;
		temp=temp/10;
	}
	cout<<n1;
	return 0;
}
