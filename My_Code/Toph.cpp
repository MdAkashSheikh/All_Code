#include <bits/stdc++.h>
using namespace std;
#define ll                  long long
#define pb                  push_back
#define pf                  push_front
#define mk                  make_pair
#define f(n)                for(ll i=0;i<n;i++)
#define fr(n)               for(ll i=n-1;i>=0;i--)
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test                ll t;cin>>t;while(t--)
#define mod                 1000000007
#define md                  998244353
#define in(a)               for(auto &e:a)cin>>e;
#define all(container)      container.begin() , container.end()
#define rall(container)     container.rbegin() , container.rend()
#define sz(container)       (ll)container.size()
#define vi                  vector<ll>
#define vs                  vector<string>
#define vc                  vector<char>
#define pii                 pair <ll , ll>
#define vpi                 vector<pair<ll,ll>>
#define fi                  first
#define se                  second
#define setp(x)             cout << fixed << setprecision(x)
#define meme(x,i)           memset(x,i,sizeof(x))
#define lb                  lower_bound
#define ub                  upper_bound

int main()
{
    #ifndef ONELINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    #endif
    
    fast
    test{
		ll a,b;cin>>a>>b;
		cout<<((a%b==0||b%a==0)?"true":"false")<<"\n";
	}
}