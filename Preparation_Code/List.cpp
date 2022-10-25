#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 1, 6, 3};
    list<int>myList(arr, arr+5);
    list<int>::iterator it;

    it = myList.begin();
    it++;
    cout<<*it<<endl;


    myList.insert(it, 7);

    for(it = myList.begin(); it!=myList.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

//    for(it = myList.begin(); it!=myList.end(); it++)
//    {
//        cout<<*it<<"\t";
//
//    }
//    cout<<endl;

    return 0;
}
