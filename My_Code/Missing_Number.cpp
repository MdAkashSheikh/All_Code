#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

#define loop(i, a)      for(int i=0; i<a; i++)


int main()
{
    ll n, a, s=0;
    cin>>n;
    loop(i, n-1)
    {
        cin>>a;
        s+=a;
    }
    ll a1=n*(n+1)/2;
    cout<<a1-s<<endl;
    return 0;
}