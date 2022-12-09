#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100], b[100];
    int c, d;
    cin>>a>>b;

    c=strlen(a);
    d=strlen(b);
   
    if(c==d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}