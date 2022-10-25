#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    if(0<n)
    {
        cout<<n<<endl;
    }
    else
    {
        if(n%10==0)
        {
            cout<<0<<endl;
        }
     /*   else if((n/10)%10==0)
        {
            cout<<(n/10)<<endl;
        }*/
        else
        {
            cout<<n/10<<endl;
        }
    }

    return 0;
}
