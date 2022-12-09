#include<bits/stdc++.h>]
using namespace std;

int main()
{
    int n, max, min, s;
    cin>>n;
    int arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    max=arr[0];
    min=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Max Value is :"<<max<<endl;
    cout<<"Min Value is :"<<min<<endl;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=max && arr[i]!=min)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}