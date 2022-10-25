#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s.size();
    int n=(s[a-2]-'0')*10+(s[a-1]-'0');

    if(n%4==0)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
