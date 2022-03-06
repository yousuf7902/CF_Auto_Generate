#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;

    for (int i = 0, j = 0; i < a.size(), j < b.size();i++, j++){
        if(a[i]==b[j]){
            b[i] = '0';
        }
        else{
            b[i] = '1';
        }
    }
    cout << b << endl;
    return 0;
}