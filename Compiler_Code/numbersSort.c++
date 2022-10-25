#include<bits/stdc++.h>
using namespace std;

int main(){
    int array_size;
    cout<<"How Many Number To Enter: ";
    cin>>array_size;
    int numbers[array_size];
    for(int i = 0 ; i < array_size; i++)
        cin>>numbers[i];
    sort(numbers, numbers + array_size);
    int half;
    half = array_size/2;
    for(int i = 0 ; i < array_size/2; i++, half++)
        cout<<numbers[i]<<" "<<numbers[half]<<" ";
    
    return 0;
}