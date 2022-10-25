#include<bits/stdc++.h>
using namespace std;

struct myStruct{
    string name;
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    struct myStruct s2;

    cin>>s1.age;
    cin>>s1.name;


    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    return 0;
}
