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
        int num[4], win1, win2, flag = 0;

        for (int i = 0; i < 4; i++)
        {
            cin >> num[i];
        }

        if (num[0] > num[1])
        {
            win1 = num[0];
        }
        else
        {
            win1 = num[1];
        }

        if (num[2] > num[3])
        {
            win2 = num[2];
        }
        else
        {
            win2 = num[3];
        }
        for (int i = 0; i < 4; i++)
        {
            if (num[i] == win1 || num[i] == win2)
            {
                continue;
            }
            else
            {
                if (num[i] < win1)
                {
                    flag++;
                }
                if (num[i] < win2)
                {
                    flag++;
                }
            }
        }

        if(flag==4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}