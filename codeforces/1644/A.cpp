#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int r = 0, g = 0, b = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == tolower(s[j]))
                {
                    if (s[i] == 'r')
                    {
                        r++;
                    }
                    else if (s[i] == 'g')
                    {
                        g++;
                    }
                    else
                    {
                        b++;
                    }
                }
            }
        }

        if(r==1 && g==1 && b==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}