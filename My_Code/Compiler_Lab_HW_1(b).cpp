#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array element: ";
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    cout<<"Largest value is : "<<arr[n-1]<<endl;
    cout<<"2nd Largest value is : "<<arr[n-2]<<endl;

    return 0;
}