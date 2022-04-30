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
        string s;
        cin >> s;
        int a = 97, alice = 0, bob = 0, bob_min = 0, f = 0;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                alice = alice + ((int)s[i] - 97) + 1;
            }
        }
        else
        {
            if (s.size() == 1)
            {
                alice = 0;
                bob = bob + ((int)s[0] - 97) + 1;
            }
            else
            {
                if (s[0] == s[s.size() - 1])
                {
                    
                    f = 1;
                    bob = ((int)s[s.size() - 1] - 97) + 1;
                    
                    for (int i = 0; i < s.size() - 1; i++)
                    {
                        alice =alice+ ((int)s[i] - 97) + 1;
                    }
                }
                else
                {
                    bob=bob = bob + ((int)s[0] - 97) + 1;
                    bob_min = bob_min + ((int)s[s.size() - 1] - 97) + 1;

                    if(bob>bob_min){
                        for (int i = 0;i<s.size()-1;i++){
                            alice =alice+ ((int)s[i] - 97) + 1;
                        }
                    }
                    else{
                        f = 1;
                        for (int i = 1;i<s.size();i++){
                            alice =alice+ ((int)s[i] - 97) + 1;
                        }
                    }
                }
            }
        }

        if (bob == 0)
        {
            cout << "Alice " << alice << endl;
        }
        else if (alice == 0)
        {
            cout << "Bob " << bob << endl;
        }
        else
        {

            if (f == 1)
            {
                alice = alice - bob;
                cout << "Alice " << alice << endl;
            }
            else
            {
                alice = alice - bob_min;
                cout << "Alice " << alice << endl;
            }
        }
    }
    return 0;
}