#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        long long int a, b, n,count=0;
        cin >> a >> b >> n;

        while(n>=b && n>=a){
            int maxNum = max(a, b);
            count++;
            if(maxNum==a){
                b = b + a;
            }else{
                a = a + b;
            }
        }
        cout << count << endl;
    }
    return 0;
}