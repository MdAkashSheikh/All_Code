#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int temp;
    if(a<b) swap(a, b);
    while(a%b!=0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return b;

}

int LCM(int a, int b)
{
    int m = abs(a*b);
    return m/GCD(a, b);

}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<GCD(a, b)<<endl;

    cout<<LCM(a, b)<<endl;
    return 0;
}
