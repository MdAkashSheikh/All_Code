#include<bits/stdc++.h>
using namespace std;

bool myfunc(int a, int b)
{
    return (a>b);
}

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    int a;
    while(cin>>a)
    {
        if(a==0){break;}
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end(), myfunc);

    for(it=vec.begin(); it!=vec.end(); it++)
        cout<<*it<<" ";

    cout<<endl;


    return 0;
}
