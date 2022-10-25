#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, a=0;
        set<int>st;
        set<int>::iterator it;
        cin>>n;

        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                st.insert(i);
                st.insert(n/i);
            }
        }
        //int p=st.size()
        if(st.size()==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
      /*  for(it=st.begin(); it!=st.end(); it++)
        {
            cout<<*it<<" ";
        }*/
    }

    return 0;
}
