#include<bits/stdc++.h>
using namespace std;

int main(){
    string expressions = "";
    int test;
    cout<<"Number of expressions: ";
    cin>>test;
    test++;
    string expression[test];
    for(int i = 0; i < test; i++){
        getline(cin, expression[i]);
        expressions += expression[i];
        expressions += "\n";
    }

    string heads[test];
    for(int i = 0; i < test; i++){
            heads[i] = expression[i][0];
        if(expression[i][1] == '\''){
            heads[i] += '\'';
        }
    }

    string firsts[test];

    for(int i = 0; i < test; i++){
        firsts[i] = "";
        for(int j = 0; j < expression[i].size(); j++){
            if((expression[i][j] == '>' || expression[i][j] == '|') && !(expression[i][j+1] >= 'A' && expression[i][j+1] <= 'Z')){
                firsts[i] += expression[i][j+1];
                firsts[i] += ',';
            }
        }
    }


for(int i = 0; i < test; i++){
        for(int j = 0; j < expression[i].size(); j++){
            if((expression[i][j] == '>' || expression[i][j] == '|') && (expression[i][j+1] >= 'A' && expression[i][j+1] <= 'Z')){
                firsts[i] += expression[i][j+1];
                firsts[i] += ',';
            }
        }
    }

    return 0;
}