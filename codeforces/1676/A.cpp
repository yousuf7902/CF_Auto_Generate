#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0, j = s.size() - 1; i < j;i++,j--){
            sum1 = sum1 + ((int)s[i] - 48);
            sum2 = sum2 + ((int)s[j] - 48);
        }
        if(sum1==sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}