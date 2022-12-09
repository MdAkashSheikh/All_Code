#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin>>n;

    c=n%1000;
    n=n/1000;
    
    b=n%1000;
    n=n/1000;

    a=n%1000000;
    
    cout<<a<<","<<b<<","<<c<<endl;

    return 0;
}