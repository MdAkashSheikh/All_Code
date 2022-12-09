#include<bits/stdc++.h>
using namespace std;

int n, ox, oy, zx, zy, x, y;
int main()
{
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        
        if(x==0) zx++;
        else ox++;

        if(y==0) zy++;
        else oy++;
        
    }
    cout<< min(zx, ox)+min(zy, oy)<<endl;

    return 0;
}