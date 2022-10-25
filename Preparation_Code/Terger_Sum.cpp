#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;

    int a[n+5];

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a, a+n);


    // Show sorted arry...
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //calculation....
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        if((a[i]+a[j])==t)
        {
            cout<<a[i]<<" "<<a[j]<<endl;    //position....1 2 3 4 5
            return 0;
        }
        }
    }

    cout<<"Not exist..."<<endl;

    return 0;
}
