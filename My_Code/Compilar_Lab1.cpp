#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    if(s.substr(0, 2)=="//")
    {
        cout<<"It is a single line comment"<<endl;
    }
    else if (s.substr(0, 2)=="/*")
    {
        cout<<"It is a multiline comment"<<endl;
    }
    else
    {
        cout<<"It is not a comment"<<endl;
    }

    return 0;
}