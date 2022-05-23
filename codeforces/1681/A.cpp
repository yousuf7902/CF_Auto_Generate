#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int al[n];

        for (int i = 0; i < n;i++){
            cin >> al[i];
        }

        int m;
        cin >> m;

        int bob[m];

        for (int i = 0;i<m;i++){
            cin >> bob[i];
        }

        sort(al, al + n);
        sort(bob, bob + m);

        if(bob[m-1]>al[n-1]){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
        if(al[n-1]>bob[m-1]){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    return 0;
}