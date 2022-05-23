#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n,count=1;
        cin >> n;
        string s;
        cin >> s;
        vector<int> vec;
        for (int i = 0; i < n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                vec.emplace_back(count);
                count = 1;
            }
        }
        cout << vec[(vec.size() / 2)] << endl;
        
    }
    return 0;
}