#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, ans=0;
    cin>>n>>a;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>a)
        {
            ans++;
        }
    }

    cout<<ans<<endl;


    return 0;
}
