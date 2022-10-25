#include<bits/stdc++.h>
using namespace std;


void rev_array(int arr[], int st, int last) {

    if(st >= last)
    return 0;

    int temp = arr[st];
    arr[st] = arr[lasr];
    arr[last] = temp;

    rev_array(int arr, st+1, last-1);
}

void print(int arr[], int n) {
    for(int i=0; i<n; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main()
{
    int
    return 0;
}
