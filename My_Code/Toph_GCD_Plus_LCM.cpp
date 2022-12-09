#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

int GCD(ll a, ll b)
{
    int temp;
    if(a<b) swap(a, b);
    while(a%b!=0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return b;

}

int LCM(ll a, ll b)
{
    int m = abs(a*b);
    return m/GCD(a, b);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, a, b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(GCD(a, b)+LCM(a,b)==a+b)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    
    return 0;
}
