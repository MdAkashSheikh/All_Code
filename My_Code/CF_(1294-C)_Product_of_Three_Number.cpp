#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve()
{
    ll n;
    cin>>n;

    int a, b, sig=0;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            a=n/i;

            for(int k=i+1; k*k<=n; k++)
            {
                b=a/k;
                if(a%k==0 && b!=i && b!=k && b>i)
                {
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<k<<" "<<b<<endl;
                    sig=1;
                    return 0;
                }
                
                
            }
            
        }
        
    }
    if(sig=1)
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
        solve();
    }


    return 0;
}
