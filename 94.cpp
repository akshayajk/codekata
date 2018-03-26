#include <iostream>
using namespace std;
int main() 
{
	int i,n,k,array[20];
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>array[i];
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			cout<<array[i];
			break;
		}
	}
	return 0;
}
