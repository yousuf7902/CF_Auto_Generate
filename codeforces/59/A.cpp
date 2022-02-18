#include<bits/stdc++.h>
using namespace std;

int main(){
    int low = 0, upper = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            low++;
        }
        else{
            upper++;
        }
    }

    for (int i = 0; i < s.size();i++){
        if(low>upper){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
        else if(low==upper){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
        else{
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i] - 32;
            }
        }   
    }
    cout << s;
}