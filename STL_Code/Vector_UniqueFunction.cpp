#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int s=unique(v.begin(), v.end())-v.begin();

   cout<<s<<endl;

   for(int i=0; i <s; i++)
   {
        cout<<v[i]<<" ";
   }

    return 0;
}
