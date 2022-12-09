#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin>>n;
    if(n<=2)
    {
        cout<<n<<endl;
        return 0;
    }
    if(n<=4)
    {
        cout<<n*(n-1)<<endl;
        return 0;
    }
    if(n<=6)
    {
        cout<<60<<endl;
        return 0;
    }
    if(n==7)
    {
        cout<<210<<endl;
        return 0;
    }
    if(n==8)
    {
        cout<<280<<endl;
        return 0;
    }
    if(n%2==1)
    {
        cout<<n*(n-1)*(n-2)<<endl;
        return 0;
    }
    else
    {
        if(n%3==0)
        {
            k=(n-1)*(n-2)*(n-3);
        }
        else
        {
            k=n*(n-1)*(n-3);
        }
    }
    cout<<k<<endl;

    return 0;
}