#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, ans = 0;
    cin>>x;

    while(x)
    {
        ans+=(x%10);
        ans*=10;
        x=x/10;

    }

    cout<<ans/10<<endl;

    return 0;
}
