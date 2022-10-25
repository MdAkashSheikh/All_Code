#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display(){
        cout<<id<<"\t"<<gpa<<endl;
    }
};

int main()
{
    student Alim;
    Alim.id = 101;
    Alim.gpa = 3.44;

    cout<<Alim.id <<"\t"<<Alim.gpa<<endl;

    student Akash;
    Akash.id = 102;
    Akash.gpa = 4.00;

    Akash.display();

    return 0;
}
