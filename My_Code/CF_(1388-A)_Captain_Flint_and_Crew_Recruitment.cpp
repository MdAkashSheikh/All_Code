#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n<=30)
        {
            cout<<"NO"<<endl;
        }
        else if(n==30 || n==44 || n==40)
        {
            cout<<"YES"<<endl;
            cout<<"6 10 15 "<<n-31<<endl;       
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<"6 10 14 "<<n-30<<endl;
        }
    }


    return 0;
}

