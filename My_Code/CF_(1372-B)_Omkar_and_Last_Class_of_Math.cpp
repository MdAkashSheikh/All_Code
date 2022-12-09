#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{   
    ll n;
    cin>>n;

    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
    }
    else
    {
        for(ll i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<n/i<<" "<<(n-(n/i))<<endl;
                return;
            }
        }
        cout<<1<<" "<<n-1<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}