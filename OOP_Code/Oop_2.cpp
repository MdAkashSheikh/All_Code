#include<bits/stdc++.h>
using namespace std;

class student
{
    public:

    string firstname, lastname;
    int roll;

};


int main()
{
    student s1;
    student s2;
    cout<<"Enter Student-1 First Name: ";
    cin>>s1.firstname;
    cout<<"Enter Student-1 Lastname: ";
    cin>>s2.lastname;

    cout<<"Enter Student-1 Roll: ";
    cin>>s1.roll;
    cout<<endl;



    return 0;
}
