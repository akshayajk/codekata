#include <iostream>

using namespace std;

int main() 
{
    int a;
    cout<<"enter the value of a";
    cin>>a;
    if(a>=1000)
    {
    
    		if(a%4==0)
    		{
    			cout<<"it is a leap year";
    		}
    		else
    		{
    			cout<<"it is not a leap year";
    		}
    }
    
    return 0;
}
