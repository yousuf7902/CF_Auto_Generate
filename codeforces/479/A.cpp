#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, maxNum = INT_MIN, result;
    cin >> a >> b >> c;

    result = a + b * c;
    maxNum = max(maxNum, result);
    result = a * (b + c);
    maxNum = max(maxNum, result);
    result = a * b * c;
    maxNum = max(maxNum, result);
    result = (a+b)*c;
    maxNum = max(maxNum, result);
    result = (a+b+c);
    maxNum = max(maxNum, result);
    cout << maxNum << endl;
    return 0;
}