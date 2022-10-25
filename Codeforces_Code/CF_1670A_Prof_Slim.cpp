#include<bits/stdc++.h>
using namespace std;

const int INF=1000000007;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n+5], p=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
                p++;
        }
        bool f=0;
        arr[0]=-INF;

        for(int i=1; i<=n; i++)
        {
            if(i<=p)
                arr[i] = abs(arr[i])*(-1);
            else
                arr[i] = abs(arr[i]);

            if(arr[i]<arr[i-1])
                f=1;
        }

        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

    return 0;
}
