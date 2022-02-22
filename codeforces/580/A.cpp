#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=1, maxNum=1;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if(a[i]<=a[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        maxNum = max(count, maxNum);
    }
    cout << maxNum;
    return 0;
}