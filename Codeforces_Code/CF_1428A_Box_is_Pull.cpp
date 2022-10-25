#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a, b, c, d;
        cin>>a>>b>>c>>d;

        cout<<((c-a)+(d-b))*((c-a)+(d-b))<<endl;
    }

    return 0;
}
