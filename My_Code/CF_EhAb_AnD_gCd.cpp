#include<bits/stdc++.h>
using namespace std;

// using ll = long long int;

// void GCD(ll a, ll b)
// {
//     if(a%b==0)  return b;
//     return GCD(b, a%b);
// }

// ll LCM(ll x, ll y)
// {
//     ll L=x*y;
//     return L/GCD(x, y);
// } 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            cout<<1<<" "<<n-1<<endl;
        }
    }

    return 0;
}