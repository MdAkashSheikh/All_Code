#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int mn = arr[0], mx = arr[0];
    for(int i=0; i<n; i++)
    {
        if(mn>arr[i])
        {
            mn = i;
        }

        if(mx<arr[i])
        {
            mx = i;
        }
    }
    cout<<"Min is = "<<arr[mn]<<endl;
    cout<<"Max is = "<<arr[mx]<<endl;

    return 0;
}
