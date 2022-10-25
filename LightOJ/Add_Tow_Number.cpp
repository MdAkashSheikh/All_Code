#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, res=0;
    cin>>a>>b;

    c=a+b;

    while(c>0)
    {
        res += (c%10)*10;
        c = c /10;
    }

    cout<<res/10<<endl;

    return 0;
}
