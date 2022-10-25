#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int j;

        int n;
        cin>>n;
        int arr[n], arr1[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);

        for(int i=0, j=(n/2); i<j; i++, j++)
        {
            int p=0, q = 1;
            arr1[p] = arr[i];
            arr1[q] = arr[j];
            p+=2;
            q+=2;
        }

        for(int i=0; i<n-1; i++)
        {
            if(arr1[i] == arr[i+1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }

        cout<<"YES"<<endl;

        for(int i=0; i<n; i++)
        {
            cout<<arr1[i]<<" ";
        }

    }


    return 0;
}

