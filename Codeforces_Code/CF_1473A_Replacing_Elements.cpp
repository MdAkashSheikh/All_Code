#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n, m, f=0;
        cin>>n>>m;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);

        for(int i=0; i<n; i++)
        {
            if(arr[i]>m)
                f++;
        }

        if(arr[0]+arr[1]<=m || f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
