#include<bits/stdc++.h>
using namespace std;

#define loop(i, n)         for(int i=1; i<=n; i++)
#define int long long
#const int mx = 2e5+5;
int dp[mx];

int main()
{
    int n;
    cin>>n;
    int arr[n+1] = {0};

    loop(i, n)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n+1)

    dp[0] = 1;

    loop(i, n)
    {
        if(dp[i-1]<arr[i]) return cout<<dp[i-1], 0;
        dp[i] = dp[i-1] + arr[i];
    }
    cout<<dp[n];

    return 0;
}