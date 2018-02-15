#include <iostream>
using namespace std;
class Program
{
	int c[100],sum=0,i,n,b;
	public:
	void get()
	{
		
		cout<<"enter your number";
		cin>>n;
		cin>>b;
		for(i=0;i<n;i++)
		{
			cin>>c[i];
		
		}
	}
	void display()
	{
		for(i=0;i<=b;i++)
		{
			sum=sum+c[i];
		}
		cout<<"the answer is"<<sum;
		
	}
};
int main() {
Program a;
a.get();
a.display();
return 0;
}


