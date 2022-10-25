#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        stringstream g(s);

        int x=0;
        g>>x;

        int l=0, r=0;
        for(int i=0; i<3; i++)
        {
            r+=x%10;
            x=x/10;
        }

        for(int i=0; i<3; i++)
        {
            l+=x%10;
            x=x/10;
        }

        if(l==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}
