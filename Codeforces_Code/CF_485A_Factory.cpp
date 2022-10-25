#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, flag=0;
    cin>>a>>b;

    set<int> s;

    if(a%b == 0)
        cout<<"YES"<<endl;

    else
    {
        while(s.find(a%b) == s.end())
        s.insert(a%b);
        a+=(a%b);
        if(a%b == 0)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
    }

    if(flag == 0)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
