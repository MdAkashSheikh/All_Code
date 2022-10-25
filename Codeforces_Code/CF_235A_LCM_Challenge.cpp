#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

/*int lcm(int a, int b, int c)
{
    return ((a*b*c)/__gcd(__gcd(a, b), c));
}
*/
ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}

int main()
{
    ll n, res=1, lc, d;
    cin>>n;
    if(n<=20)
    {
        d=0;
    }
    else
    {
        d=n-20;
    }
    for(ll i=n; i>d; i--)
    {
        for(ll j=i; j>d; j--)
        {
            for(ll k=j; k>d; k--)
            {
                lc=lcm(i, lcm(j, k));
                res=max(res, lc);
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
