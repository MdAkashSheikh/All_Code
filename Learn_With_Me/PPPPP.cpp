#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    sol(n);
    cout<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method*/
int sol(int n)
{
//Your code here

    for(int i=n; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"$";
    }
}
