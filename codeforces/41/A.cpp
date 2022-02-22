#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t,reverse;
    cin >> s >> t;

    for (int i = t.size()-1; i >= 0;i--){
        reverse = reverse + t[i];
    }
    if(s==reverse){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}