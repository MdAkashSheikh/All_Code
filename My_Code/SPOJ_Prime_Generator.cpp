#inlude<bits/stdc++.h>
using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;

const ll M = 1e9 + 7;
const ll INF = 1e9;

#define tc              ll t; cin>>t; while(t--)
#define loop(i, a, b)   for(int i=a; i<b; i++)
#define pb              emplace_back
#define ld              long double

// //*****Generates Prime till 5 million numbers*****
// bool is_prime[90000001];
// vector<ll>primes;
// void seive()
// {
//     ll maxN = 90000001
    
//     for(ll i = 1; i<=maxN; i++) is_prime[i] = 1;

//     is_prime[0]=is_prime[1]=0;
//     for(ll i = 2; i*i <= maxN; i++)
//     {
//         if(is_prime[i])
//         {
//             for(ll j=i*i; j<=maxN; j+=i) is_prime[j]=0;
//         }
//     }

//     for(ll i=1; i<=maxN; i++)
//     {
//         if(is_prime[i])
//         {
//             primes.pb(i);
//         }
//     }
// }

bool is_Prime(ll n)
{
    if(n<2)     return false;
    if(n==2)    return true;
    if(n%2==0)  return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(num%i==0)    return false;
    }
    return true;
}

int main()
{
    tc()
    {
        ll a, b;
        cin>>a>>b;
        loop(i, a, b)
        {
            if(is_Prime(i))
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}











