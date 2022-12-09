#include<bits/stdc++.h>
using namespace std;

//using ll = long long;
int main()
{
    int n;
    cin>>n;
    int k=n,flag=0;
    while(k!=0)
    {
        if(k%1000==144)
        {
            flag=1;
            k=k/1000;
        }
        else if(k%100==14)
        {
            flag=1;
            k=k/100;
        }
        else if(k%10==1)
        {
            flag=1;
            k=k/10;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;;
    }
    
    return 0;
}