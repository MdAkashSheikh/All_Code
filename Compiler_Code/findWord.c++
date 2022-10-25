#include<bits/stdc++.h>
using namespace std;

int main(){
    char line[1000];
    int count = 0;
    cin.getline(line, 1000);
    for(int i = 0; i < strlen(line); i++){
        if(line[i] == ' ')
            count++;
    }
    cout<<"Number of words: "<<count+1<<endl;
    return 0;
}