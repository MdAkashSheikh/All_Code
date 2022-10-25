#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, p, ans = 0;
    cin>>x;
    p = x;
    if(x<0)
    {
        cout<<"false"<<endl;
        //return false;
    }
    else
    {
        while(x)
        {

            ans += x%10;
            ans = ans*10;

            x /= 10;
        }
        if(p==(ans/10))
        {
            cout<<"true"<<endl;

        }
        else
        {
            cout<<"false"<<endl;
        }
     }

    return 0;
}
