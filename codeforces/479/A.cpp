#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, maxNum;
    cin >> a >> b >> c;

    maxNum = a * b * c;
    maxNum = max(maxNum, a+b*c);
    maxNum = max(maxNum, a*(b+c));
    maxNum = max(maxNum, a*b+c);
    maxNum = max(maxNum, (a+b)*c);
    maxNum = max(maxNum, a+b+c);

    cout << maxNum << endl;
    return 0;
}