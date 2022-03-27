#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, ans=0;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i <n-1;i++){
            if(s[i]=='0' && s[i+1]=='0'){
                    ans += 2;
            }
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}