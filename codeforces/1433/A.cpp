#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /* int t;
    cin >> t;

    while(t--){
        vector<int> vec;
        int x;
        cin >> x;
        string s = "";

        for (int i = 1; i <= x%10;){
            s = s + to_string(i);
            
            if(s=="1111" || s=="2222"|| s=="3333" || s=="4444" || s=="5555" ||s=="6666"||s=="7777"||s=="8888"||s=="9999"){
                i++;
                vec.emplace_back(s.size());
                s = "";
            }
            else{
                vec.emplace_back(s.size());
            }
            if(s==to_string(x))
                break;
        }

        int ans = accumulate(vec.begin(), vec.end(), 0);
        cout << ans << endl;
    } */

    //Another Way

    int t;
    cin >> t;

    while(t--){
        int x, digit, count = 0,ans;
        cin >> x;
        digit = x % 10;

        while(x>0){
            count++;
            x = x / 10;
        }

        if(count==1){
            ans = ((digit * 10) - 10) + 1;
        }
        else if(count==2){
            ans = ((digit * 10) - 10) + 3;
        }
        else if(count==3){
            ans = ((digit * 10) - 10) + 6;
        }
        else{
            ans = ((digit * 10) - 10) + 10;
        }

        cout << ans << endl;
    }

    return 0;
}