#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

#define loop(i, a)      for(int i=0; i<a; i++)

int main()
{
    ll n;
    cin>>n;
    ll arr[n+123];

    loop(i, n)
    {
        cin>>arr[i];

    }

    ll sum=0, ans=-1000000000;

    loop(i, n)
    {
        sum+=arr[i];
        if(sum<arr[i]) sum=arr[i];
        if(ans<sum)  ans=sum;
    }
    cout<<ans<<endl;

    return 0;
}