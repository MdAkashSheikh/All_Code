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
        int k=100-n;
        int g=__gcd(n, k);
        int e=n/g;
        int w=k/g;

        cout<<e+w<<endl;
    }


    return 0;
}