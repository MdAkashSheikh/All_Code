#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101], b[101];
    int a1=0, b1=0;
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
            a1++;
        }
        else if(a[i]<b[i])
        {
            b1++;
        }
    }
    cout<<a1<<" "<<b1<<endl;

    return 0;
}