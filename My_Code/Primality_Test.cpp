#include<bits/stdc++.h>
using namespace std;

int prime1(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int prime2(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int prime3(int n)
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
    int n;
    while (cin>>n)
    {
        if(prime3(n))
    {
        cout<<"Prime"<<endl;

    }
    else
    {
        cout<<"Non-Prime"<<endl;

    }
    }
    return 0;
}