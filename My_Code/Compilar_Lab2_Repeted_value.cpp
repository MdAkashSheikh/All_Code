#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
   
    cin>>n;
    int arr[n+10];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                
            }
            cout<<arr[i]<<"is repeted "<<c<<"times"<<endl;
        }
        
    }


    return 0;
}