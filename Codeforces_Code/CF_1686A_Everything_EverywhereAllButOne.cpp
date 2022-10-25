#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], ans=0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            ans+=arr[i];

        }
        ans=ans-arr[2];

        if(ans%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}


