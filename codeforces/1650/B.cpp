#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long int l, r, a,x,result;
        cin >> l >> r >> a;

        if(r - (r % a) - 1>=l){
            x = r - (r % a) - 1;
        }
        else{
            x = r;
        }

        result = max((x / a) + (x % a), (r / a) + (r % a));
        cout << result << endl;
    }

    return 0;
}