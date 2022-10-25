#include<bits/stdc++.h>
using namespace std;

int getPair(int arr[], int n, int k)
{
    sort(arr, arr+n);

    int x=0, c=0, y, z;

    for(int i=0; i<n; i++)
    {
        x = k - arr[i];

        int y=lower_bound(arr+i+1, arr+n, x)-arr;

        int z=upper_bound(arr+i+1, arr+n, x)-arr;

        c=c+z-y;
    }
    return c;
}



int main()
{
    int n, k; cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<getPair(arr, n, k);
}
