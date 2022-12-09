#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==1)   cout<<3<<endl; 
    else if(n==2) cout<<4<<endl;
    else
    {
        cout<<(n-1)*(n-1)/n<<endl;
    }

    return 0;
}