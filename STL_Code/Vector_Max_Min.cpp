/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cout<<"Max number is: "<<v[n-1]<<endl<<"Min naumber is: "<<v[0]<<endl;

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {2, 3, 5, 5, 7, 7, 1};
    vector<int>::iterator it = min_element(v.begin(), v.end());
    cout<<*it<<endl;


    return 0;
}
















