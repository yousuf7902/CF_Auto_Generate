#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int long long n, s,result;
        cin >> n >> s;

        n = n * n;
        result = s / n;
        cout << result<<endl;
    }

    return 0;
}