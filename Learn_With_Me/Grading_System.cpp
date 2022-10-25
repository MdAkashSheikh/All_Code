#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res;
    cin>>res;

    switch(res/10)
    {
        case 10:
        case 9:
            cout<<"Grade: 'A+'.\nBest of luck!!"<<endl;
            break;
        case 8:
            cout<<"Grade: A+"<<endl;
            break;
        case 7:
            cout<<"Grade: A"<<endl;
            break;
        case 6:
            cout<<"Grade: A-"<<endl;
            break;
        case 5:
            cout<<"Grade: B"<<endl;
            break;
        case 4:
            cout<<"Grade: C"<<endl;
            break;
        default:
            cout<<"So sad!! You are a good student but we have not caring properly"<<endl;
    }

    return 0;
}
