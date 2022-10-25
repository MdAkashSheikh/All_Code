#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, ans=0;
    cin>>n;
    int team[n][3];

    for(int i=0; i<n; i++)
    {
        int p=0;
        for(int j=0; j<3; j++)
        {
            cin>>team[i][j];
            p+=team[i][j];
        }
        if(p>=2)
        {
            ans++;
        }

    }

    cout<<ans<<endl;


    return 0;
}
