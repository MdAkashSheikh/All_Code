#include<bits/stdc++.h>
using namespace std;

int missing(int n, int k){

    int total;

    total = n * (n+1)/2;

    return total-k;
}


int main()
{
    int n, s=0;
    cin>>n;
    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }

    cout<<"The missing element: "<<missing(n+1, s);
    return 0;
}
