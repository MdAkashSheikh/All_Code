#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int gcd(int a, int b)
{
    if(a%b == 0) return b;
    return gcd(b, a%b);
}


ll find_lcm(ll arr[], int n)
{
    ll ans = arr[0];

    for(int i=1; i<n; i++)
    {
        ans = (arr[i] * ans)/gcd(arr[i], ans);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll arr[50];
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        cout<<find_lcm(arr, n)<<endl;
    }
    return 0;
}
