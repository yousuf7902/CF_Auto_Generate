#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, fixed = "hello";
    int d = 0;
    cin >> s;

    for (int i = 0; i < s.size();i++){
        if(s[i]==fixed[d]){
            d++;
            if(d==5){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}