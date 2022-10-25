#include<bits/stdc++.h>
using namespace std;

int bin_Search(int a[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while(left<=right)
    {
        mid = (left + right)/2;
        if(a[mid]==x)
        {
            return mid;
        }

        if(a[mid]<x)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ter;
    cin>>ter;

    int p = bin_Search(arr, n, ter);
    cout<<"Output: "<<p<<endl;
    cout<<"Explanation: "<<ter<<" appears at index "<<p<<"."<<endl;

    return 0;
}
