#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {   
        cin>>arr[i];
    }
    //sort(arr,arr+n);
    int c=arr[0];

    for(int j=0; j<n; j++)
    {
        if(arr[j]!=c)
        {
            cout<<"Missing number : "<<c<<endl;
            break;
        }
        c++;
    }

    return 0;
}