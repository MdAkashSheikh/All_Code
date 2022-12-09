#include <iostream>
using namespace std;

int main() {
    string s;
    string t = "";

    getline(cin, s);

    for (int i = 0; i <s.size(); ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i]>='0' && s[i]<='9')) 
        {
            t = t + s[i];
        }
    }
    s = t;
    for(int i=0; i<s.size(); i++)
    {
         cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}