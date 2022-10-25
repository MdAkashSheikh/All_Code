#include<bits/stdc++.h>
using namespace std;

int power(float a, unsigned int b)
{
    float t;
    if(b==0)
        return 1;
    t = power(a, b/2);

    if(b%2==0)
        return t * t;
    else
    {
        if(b>0)
            return a * t * t;
        else
            return (t * t)/a;
    }
}

int main()
{
    float a;
    int n;
    cin>>a>>n;

    //cout<<pow(a, n);
    cout<<power(a, n);
    return 0;
}
