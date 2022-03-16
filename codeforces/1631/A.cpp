#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], b[n],max_a=0,max_b=0;

        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        for (int i = 0; i < n;i++){
            cin >> b[i];
        }
        for (int i = 0; i < n;i++){
            if(a[i]<b[i]){
                swap(a[i], b[i]);
            }
        }
        for (int i = 0; i < n;i++){
            max_a = max(max_a, a[i]);
            max_b = max(max_b, b[i]);
        }
        cout << max_a * max_b << endl;
    }
    return 0;
}