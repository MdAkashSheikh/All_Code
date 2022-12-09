#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if(n<2) return 0;
    if(n<=3) return 1;
    if(n%2==0) return 0;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPrime(n))
        {
            cout<<"yes"<<endl;

        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}