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
        int count_A = 0, flag=1;
        string s1;
        cin >> s1;
        if(s1[s1.size()-1]!='B'){
            flag = 0;
        }
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'A')
            {
                count_A++;
            }
            else
            {
                count_A--;
            }

            if(count_A<0){
                flag = 0;
            }
        }

        if (flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}