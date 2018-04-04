#include <iostream>
 using namespace std;
int main() 
{
	int n,array[30],i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>array[i];
	}
	for(i=1;i<=n;i++)
	{
		if(i!=array[i])
		{
			cout<<i;
			break;
		}
	}
 
	return 0;
}
