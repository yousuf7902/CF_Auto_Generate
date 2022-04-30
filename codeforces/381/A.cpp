#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c, flag = 0, maxNum = 0, s = 0, d = 0;
    cin >> c;
    int arr[c];

    vector<int> s_vec;
    vector<int> d_vec;

    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = c - 1; j >= 0; j--)
    {
        if (arr[i] <= arr[j])
        {
            maxNum = arr[j];
            arr[j] = 0;
        }
        else
        {
            maxNum = arr[i];
            arr[i] = 0;
            i++;
            j++;
        }

        if (flag == 0)
        {
            s_vec.emplace_back(maxNum);
            flag = 1;
        }
        else
        {
            d_vec.emplace_back(maxNum);
            flag = 0;
        }
    }
    s = accumulate(s_vec.begin(), s_vec.end(), 0);
    d = accumulate(d_vec.begin(), d_vec.end(), 0);

    cout << s << " " << d << endl;

    return 0;
}