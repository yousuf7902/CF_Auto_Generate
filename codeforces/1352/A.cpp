#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> arr;
        int n, count = 0, i = 1, num;
        cin >> n;
        if (n <= 10)
        {
            cout << 1 << endl
                 << n << endl;
        }
        else
        {
            while (n != 0)
            {
                num = (n % 10) * i;
                if(num!=0){
                    arr.push_back(num);
                }
                n = n / 10;
                i = i * 10;
            }
            cout << arr.size() << endl;
            for (auto it:arr)
            {
                cout << it << " ";
            }
        }
    }
    return 0;
}