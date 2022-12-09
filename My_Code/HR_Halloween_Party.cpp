#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int Solve()
{
    int n;
    cin>>n;

    int a = 1;
    int b = 1;
    int c = 1;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            n/=i;
            a = i;
            break;
        }
    }

    for(int i = 2; i*i<=n; i++)
    {
        if(n%i==0 && i!=a && (n/i) != i)
        {
            n/=i;
            b = i;
            break;
        }
    }
    c = n;
    if(a!=b && b!=c && c!=1 && a!=1 && b!=1 && c!=1)
    {
        cout<<"YES\n"<<endl;
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        Solve();
    }

    return 0;
}