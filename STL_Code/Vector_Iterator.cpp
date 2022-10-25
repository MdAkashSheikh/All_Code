#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> vec;
    vector<int>::iterator it;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }

    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
