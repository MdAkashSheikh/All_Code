#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

#define makeItQuick		ios_base::sync_with_stdio(0); cout.tie(0);
#define tc 				ll t; cin>>t; while(t--)
#define RP(i, a, b)		for(ll i=a; i<b; i++)
#define REP(i, a)		for(ll i=0; i<a; i++)
#define pb				emplace_back
#define ld 				long double
#define vl				vector<ll>
#define vi				vector<int>		
#define vc    			vector<char>
#define vs				vector<string>
#define vd  			vector<double>

 
int mian()
{
	ll n, c, mx=1;
	cin>>n;
	ll arr[n];

	REP(i, n)
	{
		cin>>arr[i];
	}
	RP(i, 1, n)
	{
		c=1;
		while(arr[i]>=arr[i-1])
		{
			c++;
			i++;
		}
		mx=max(mx, c);

	}
	cout<<mx<<endl;

	return 0;
}