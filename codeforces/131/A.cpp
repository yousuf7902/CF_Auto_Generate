#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,unchanged;
    cin >> s;
    unchanged = s;
    for (int i = 0; i < s.size();i++){
        if(s[i+1]>='a' && s[i+1]<='z'){
            cout << unchanged << endl;
            return 0;
        }
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }
        else if(s[0]>='a' && s[0]<='z'){
            s[0] = s[0] - 32;
        }
    }
    cout << s<< endl;
    return 0;
}