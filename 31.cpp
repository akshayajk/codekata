#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 0,i;
    cout << "Enter a sentence: ";
    getline(cin, str);
    for(i = 1;i <= str.length();i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }
        count++;
      
    }
    cout<<count;
    return 0;
}
