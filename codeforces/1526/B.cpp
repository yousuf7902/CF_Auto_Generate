#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;


    while(t--){
        int x,flag=0;
        cin >> x;

        while(x>0){
            if(x%11==0 || x%111==0){
                flag = 1;
                break;
            }
            x -= 111;
        }
        if(flag==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

        return 0;
}