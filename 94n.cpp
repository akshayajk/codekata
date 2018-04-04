#include <iostream>
using namespace std;
int main() 
{
	int i,n,k,a[20];
	cout<<"enter the values";
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			cout<<a[i];
			break;
		}
	}
	return 0;
}
