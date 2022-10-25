#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    int s=0;
    cin>>a>>b>>c>>d;

    if(a==b && b==c && c==d)
    {
        if(a%2==0)
        {
            cout<<32<<endl;
            return 0;
        }
        else
        {
            cout<<256<<endl;
            return 0;
        }
    }

    else
    {

        if(a%2==0)
        {
            s+=32;
        }
        else
        {
            s+=256;
        }
        if(b%2==0)
        {
            s+=32;
        }
        else
        {
            s+=256;
        }
        if(c%2==0)
        {
            s+=32;
        }
        else
        {
            s+=256;
        }
        if(d%2==0)
        {
            s+=32;
        }
        else
        {
            s+=256;
        }

    }

    cout<<s<<endl;

    return 0;
}
