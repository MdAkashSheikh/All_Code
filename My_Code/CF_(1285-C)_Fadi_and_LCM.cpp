#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

ll GCD(ll a, ll b)
{
    if(a%b==0)  return b;
    return GCD(b, a%b);
}

int main()
{
    ll n;
    cin>>n;
    ll a, b;
    
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0 && GCD(i, n/i)==1)
        {
            a=i;
            b=n/i;
        }
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}