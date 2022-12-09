#include <bits/stdc++.h>
using namespace std;
 
long long a[100005]={};
 
int main()
{
	long long i, n, cnt, mx=1;
	cin >> n;
	
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	for(i=1; i<=n; i++)
	{
		cnt=1;
		while(a[i-1]<=a[i])
		{
			cnt++;
			i++;
		}
		mx = max(mx, cnt);
	}
	cout << mx << endl;
	return 0;
}