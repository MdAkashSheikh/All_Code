#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%5==1)
    {
        cout<<"Sheldon"<<endl;
    }
    else if(n%5==2)
    {
        cout<<"Leonard"<<endl;
    }
    else if(n%5==3){
        cout<<"Penny"<<endl;
    }
    else if(n%5==4)
    {
        cout<<"Rajesh"<<endl;
    }
    else
    {
        cout<<"Howard"<<endl;
    }

    return 0;
}
