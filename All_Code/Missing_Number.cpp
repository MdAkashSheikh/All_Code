#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0, arr[n+2];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s+=arr[i];

    }
    int total = (n+1)*(n+2)/2;

    cout<<total-s<<endl;

    return 0;
}
