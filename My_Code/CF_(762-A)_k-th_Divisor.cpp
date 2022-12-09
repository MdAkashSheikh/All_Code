#include<bits/stdc++.h>
using namespace std;

#define pb  push_back
using ll = long long;
const int N = 200000+10;
const int INF = 0x3f3f3f3f;
const double eps=1e-6;
const int P = 131;
const int mod = 1000000000+7;

void solve()
{
    vector<ll>a;
    ll n, k;
    cin>>n>>k;

    for(ll i=1; i<=n/i; i++)
    {
        if(n%i==0)
        {
            a.pb(i);
            if(i!=n/i) a.pb(n/i);
        }
    }
    sort(a.begin(), a.end());

    if(k>a.size())
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<a[k-1]<<endl;
    }
}

int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }

}