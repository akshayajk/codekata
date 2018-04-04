#include <iostream>
 using namespace std;
int main() 
{
	int n,arr[30],i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		if(i!=arr[i])
		{
			cout<<i;
			break;
		}
	}
 
	return 0;
}
