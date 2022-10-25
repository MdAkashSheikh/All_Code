#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, s=0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];


        }
        for(int i=1; i<n-2; i++)
        {
            if(arr[i-1]>0 && arr[i]<0 && arr[i+1])
            {
                s+=arr[i+2];
                i++;
            }

        }
        cout<<s<<endl;
    }


    return 0;
}
