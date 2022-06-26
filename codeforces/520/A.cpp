#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,flag=0;
    cin >> n;
 
    string s;
    cin >> s;
 
    set<char> ch;
 
    for (int i = 0; i < n;i++){
 
        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z'){
            ch.emplace(tolower(s[i]));
        }
    }
    if(ch.size()==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
