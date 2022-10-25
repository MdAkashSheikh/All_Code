#include <bits/stdc++.h>
using namespace std;

int * convertStrtoArr(string str)
{
   int str_length = str.length();
  
    int arr[str_length] = { 0 };
  
    int j = 0, i, sum = 0;
  
    for (i = 0; str[i] != '\0'; i++) {
         if (str[i] == ' '){
            j++;
        }
        else {
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
    }
    return arr;
}
  

int main()
{
    string str;
    getline(cin, str);
    int *arr;
    arr = convertStrtoArr(str);
    for(int i = 0 ; ; i++){
        if(*(arr+i)==0) break;
        cout<<*(arr+i)<<endl;
    }
    return 0;
}