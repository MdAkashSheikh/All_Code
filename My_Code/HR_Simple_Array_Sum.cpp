#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1001];
    int n, s=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        s+=arr[i];
    }

    cout<<s<<endl;
    return 0;
}