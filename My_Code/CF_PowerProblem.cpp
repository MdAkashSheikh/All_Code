#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int a1, b1;
    a1=pow(a,b);
    b1=pow(b,a);
    cout<<a1-b1<<endl;

    return 0;
}