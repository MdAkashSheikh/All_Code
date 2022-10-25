#include<bits/stdc++.h>
using namespace std;


void reverse_array(int arr[], int start, int END) {
    while(start<END){
        int temp = arr[start];
        arr[start] = arr[END];
        arr[END] = temp;
        start++;
        END--;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    reverse_array(arr, 0, n-1);

    printArray(arr, n);

    return 0;
}
