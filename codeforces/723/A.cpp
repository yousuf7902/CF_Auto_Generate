#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, x2, x3 , a, b,c;
    cin >> x1 >> x2 >> x3;
    a = min(min(x1, x2), x3);
    b = max(max(x1, x2), x3);

    if((a==x1 && b==x2)||(a==x2 && b==x1)){
        c = x3;
    }
    else if((a==x3 && b==x1)||(a==x1 && b==x3)){
        c = x2;
    }
    else{
        c = x1;
    }
    int ans = (b - c) + (c - a);
    cout << ans << endl;
    return 0;
}