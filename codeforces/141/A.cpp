#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2, s3, com = " ";
    cin >> s1 >> s2 >> s3;
    com = s1 + s2;
    sort(com.begin(), com.end());
    sort(s3.begin(), s3.end());
    if(com==s3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}