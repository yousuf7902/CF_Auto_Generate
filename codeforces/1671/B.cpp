#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vr;
        int n, count1 = 0, count2 = 0, count3 = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            vr.emplace_back(x);
        }
        bool check = true;
        for (int i = 0; i < vr.size() - 1; i++)
        {
            if (vr[i + 1] - vr[i] == 1)
            {
                count1++;
            }
            else if (vr[i + 1] - vr[i] == 3)
            {
                count3++;
            }
            else if (vr[i + 1] - vr[i] == 2)
            {
                count2++;
            }
            else if (vr[i + 1] - vr[i] > 3)
            {
                check = false;
                break;
            }
        }
        if (check == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count1 >= 0 && count3 == 1 && count2==0)
            {
                cout << "YES" << endl;
            }
            else if(count2<=2 && count3==0){
                cout << "YES" << endl;
            }
            else if(count1>0 && count2==0 && count3==0){
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}