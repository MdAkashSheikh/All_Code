#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n;
    cin>>n;
    
    if(n<0)
    {
        ll n1=n/10;
        ll n2=n/100;
        ll r=n%10;

        n2=n2*10+r;

        if(n1>n2)
        {
            cout<<n1<<endl;
        }
        else
        {
            cout<<n2<<endl;
        }
    }
    else
    {
        cout<<n<<endl;
    }


    return 0;
}