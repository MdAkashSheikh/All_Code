#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mp[1000000] = {0};

    int n, t, i, x, flag=0;  cin>>n>>t;

    for(i=1; i<=n; i++)
    {
        cin>>x;
        int y = t-x;

        if(mp[y]>0 && y>0)
        {
            cout<<x<<" "<<y<<endl;
            flag++;
        }
        mp[x]= i;
    }
    if(flag==0)
    {
        cout<<"NOT Exist"<<endl;
    }


    return 0;
}
