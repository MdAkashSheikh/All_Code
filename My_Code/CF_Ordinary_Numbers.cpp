#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, ans=0;
        cin>>n;
        for(int i=1; i<=9; i++)
        {
            ll j=i;
            while (j<=n)
            {
                ans++;
                j=j*10+i;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}