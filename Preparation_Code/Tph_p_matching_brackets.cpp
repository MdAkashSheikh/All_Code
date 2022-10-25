#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<char>st;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }

        if(!st.empty())
        {
            if(s[i]==')')
            {
                if(st.top()=='(')
                {
                    st.pop();
                }
            }
            if(s[i]=='}')
            {
                if(st.top()=='{')
                {
                    st.pop();
                }
            }
            if(s[i]==']')
            {
                if()
            }
        }
    }

    return 0;
}
