#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int dri = (k * l)/nl;
    int lime = (c * d);
    int sli = p / np;

    int min_result = min(min(dri, lime), sli);

    cout <<min_result/n << endl;
    return 0;
}