#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k=0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n-1; i+=2)
        {
            if(arr[i]>arr[i+1])
            {
                k++;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}


