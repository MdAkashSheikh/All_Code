#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, s=0, j=0;
        cin>>n>>k;
        int arr[k];

        for(int i=0; i<k; i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        sort(arr, arr+k);
        if(s<=n)
        {
            cout<<s<<endl;
        }
        else
        {
            while(s>n)
            {
                s-=arr[j];
                j++;
            }
            cout<<s<<endl;
        }

    }

    return 0;
}
