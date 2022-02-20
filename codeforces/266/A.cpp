#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    string s;

    cin >> n >> s;

    for (int i = 0,j=i+1; i < n-1,j<=n; i++,j++){
        if(s[i]==s[j]){
            count++;
        }
    }
    cout << count;
    return 0;
}