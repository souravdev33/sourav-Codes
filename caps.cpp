#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=1;i<str.size();i++)
    {
        if(islower(str[i]))
        {
            cout<<str;
            return 0;
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;

return 0;
}
