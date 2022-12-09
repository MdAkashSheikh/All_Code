//------This Code show run time error---------
// #include<bits/stdc++.h>
// using namespace std;

// using ll = unsigned long long;

// int GCD(ll a, ll b)
// {
//     if(a%b==0)  return b;
//     return GCD(b, a%b);
// }

// int main()
// {
//     ll x, y, p=1, q=1;
//     cin>>x>>y;

//     for(ll i=1; i<=x; i++)
//     {
//         p*=i;
//     }
//     for(ll i=1; i<=y; i++)
//     {
//         q*=i;
//     }
//     cout<<GCD(p, q)<<endl;

//     return 0;
// }



//------My Code here---------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, m=1;
    cin>>a>>b;
    for(int i=1; i<=min(a, b); i++)
    {
        m*=i;
    }
    cout<<m<<endl;

    return 0;
}