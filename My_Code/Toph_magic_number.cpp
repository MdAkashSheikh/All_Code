#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool prime(int n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;

    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i)
        return 0;
    }
    return 1;
}

// void sq(int n)
// {
//     int p=sqrt(n);
//     if(p*p==n)
//     {
//         return p;
//     }
//     else
//     {
//         return -1;
//     }
// }

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;

        int p=sqrt(a);
        if(p*p==a)
        {
            if(prime(p))
            {
                cout<<"YES."<<endl;
            }
            else
            {
                cout<<"NO."<<endl;
            }
        }
        else
        {
            cout<<"NO."<<endl;
        }
    }


    return 0;
}