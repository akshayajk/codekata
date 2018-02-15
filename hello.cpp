#include <iostream>
using namespace std;
class Program
{
	int i,n;
	public:
	void display()
	{
		cout<<"enter your number"<<endl;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cout<<"hello";
		
		}
	}
};
int main() {
Program a;
a.display();
return 0;
}
