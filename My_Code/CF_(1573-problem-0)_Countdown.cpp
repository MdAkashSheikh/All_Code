/*              Akash Sheikh
                CSE
                45 Batch
                UITS
                University of Information Technology and Sciences--
                
            
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	ll t;
    cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		string s;
        cin>>s;

		ll i, ans=0;
		for(i=n-1; i>=0; i--) 
		{
		    ans+=(s[i]-'0');
		    if(i<n-1 && s[i]!='0') ans++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}