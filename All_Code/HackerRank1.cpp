#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], al=0, bl=0;

    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }
        else if(a[i]<b[i])
        {
            bl++;
        }
        else
        {
            continue;
        }
    }
    cout<<al<<" "<<bl<<endl;

    return 0;
}
