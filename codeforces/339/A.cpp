#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char temp;
    cin >> s;

    for (int i = 0; i < s.size()-1;i+=2){
        for (int j = i+2; j < s.size();j+=2){
            if(s[i] =='+'){
                continue;
            }
            else if(s[i]>s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << s;
}