#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=s.size();
    if(s[a-1]%4==0)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
