#include<iostream>
using namespace std;
int main()
{
string str;
int n;
cout<<"Enter the string : "<<endl;
cin>>str;
cout<<"Enter the value : "<<endl;
cin>>n;
if(n<str.length())
cout<<str.substr(str.length()-n)<<endl;
return 0;
}
