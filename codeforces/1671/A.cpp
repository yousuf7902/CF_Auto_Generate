#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        bool check = true;
        for (int i = 0; i < s.size();i++){
            if(s[i]==s[i+1] && i+1<=s.size()){
                count++;
            }
            else{
                if(count+1==1){
                    check = false;
                }
                else{
                    count = 0;
                }
            }
        }
        if(check==true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}