#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool is_prime(ll n)
{
    if(n<2)     return false;
    if(n==2)    return true;
    if(n%2==0)  return false;

    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)  return false;

    }
    return true;

}
int main()
{
    ll t, m, n;
    cin>>t;
    while (t--)
    {   
        cin>>m>>n;
        for(int i=m; i<=n; i++)
        {
            if(is_prime(i))
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}