#include <iostream>
using namespace std;
class Program
{
	int i,m;
	public:
	void display()
	{
		cout<<"enter your number"<<endl;
		cin>>m;
		for(i=1;i<=m;i++)
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
