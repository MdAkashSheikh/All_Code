#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, j=0;
    cin>>n;
    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    while(k<=n)
    {
        for(int i=k-1; i>=j; i--)
        {
            cout<<arr[i]<<" ";
        }
        j=k;
        k+=k;
    }



    return 0;
}
