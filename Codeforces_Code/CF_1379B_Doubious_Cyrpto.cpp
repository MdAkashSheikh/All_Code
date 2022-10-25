#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        cout<<a<<" "<<b<<" "<<abs(c-(a+b))<<endl;
    }

    return 0;
}
