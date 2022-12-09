#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
bool tPrime(ll n)
{
    int c=0;
    int s=sqrt(n);
    for(int i=2; i<=s; i++)
    {
        if(n%i==0) c++;
    }
    if(c>0) return false;
    return true;
}
 
void solve()
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<"NO"<<endl;
    else
    {
        ll r=sqrt(n);
        if(r*r==n)
        {
            if(tPrime(r))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
 
    }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}