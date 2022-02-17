#include<bits/stdc++.h>
using namespace std;

int main(){
    string check;
    cin >> check;
    int count = 0;
    for (int i = 0; i < check.size()-1;i++){
        for (int j = i+1; j <= check.size();j++){
            if(check[i]==check[j]){
                check[j] = ' ';
            }
        }
    }
    for (int i = 0; i < check.size();i++){
        if(check[i]==' '){
            continue;
        }
        else{
            count++;
        }
    }
    if(count%2!=0){
        cout << "IGNORE HIM!";
    }
    else{
        cout << "CHAT WITH HER!";
    }
}