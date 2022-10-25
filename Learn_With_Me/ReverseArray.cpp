#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void revArray(int arr[], int st, int en)
{
    while(st<en)
    {
        int t = arr[st];
        arr[st] = arr[en];
        arr[en] = t;
        st++;
        en--;
    }

}

int main()
{
    int n;  cin>>n;

    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Reverse : ";
    printArray(arr, n);

    revArray(arr, 0, n-1);

    cout<<"After Reverse : ";
    printArray(arr, n);

    return 0;
}
