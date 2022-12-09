#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        arr[i]=0;
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i; j<=n; j+=i)
            {
                arr[j]++;
            }
        }
    }
    int ans = 0;

    for(int i=0; i<=n; i++)
    {
        if(arr[i]==2)
        {
            ans++;
        }
    }
    cout<<ans+1<<endl;


    return 0;
}


