#include <iostream>
using namespace std;
int main() 
{
	char str[50],temp[50];
	int i,k,j;
cout<<"\nenter the string:";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=temp[k];
		}	}
	}
	cout<<str;
	return 0;
}
