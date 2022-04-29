#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0, py = 0,ans=0;
    vector<int> vec;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        py = py + sum;
        
        if(py<=n){
            ans = i;
        }
        else{
            break;
        }
    }
    cout << ans << endl;

    return 0;
}