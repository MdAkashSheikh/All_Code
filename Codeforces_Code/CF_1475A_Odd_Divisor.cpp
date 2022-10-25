#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int divisor(ll n)
{
    if(n<3)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    while(n>=3)
    {
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        n=n/2;
    }
    cout<<"NO"<<endl;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        divisor(a);
    }

    return 0;
}
