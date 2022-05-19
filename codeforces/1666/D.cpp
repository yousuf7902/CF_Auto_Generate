#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    while(n--){
        int arr[1000] = {0};
        string s, t,ch="";
        cin >> s >> t;

        for (int i = t.size()-1;i>=0;i--){
            for (int j = s.size() - 1; j >=0;j--){
                if(arr[j]==0 && s[j]==t[i]){
                    arr[j] = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < s.size();i++){
            if(arr[i]){
                ch = ch + s[i];
            }
        }
        if(ch==t){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}