#include<bits/stdc++.h>
using namespace std;

int main(){
    int array_size;
    cout<<"Enter the Number Limit: ";
    cin>>array_size;
    int array[array_size+1];
    for(int i = 1; i < array_size+1; i++)
        array[i] = 1;  
    cout<<"How many numbers to enter? ";
    int r, temp;
    cin>>r;

    for(int i = 1; i <= r; i++){
        cin>>temp;
        array[temp] = 0;
    }
    cout<<"The Missing Numbers: ";
    for(int i = 1; i < array_size+1; i++)
        if(array[i])
            cout<<i<<" ";
    return 0;
}