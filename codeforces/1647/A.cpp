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
        int num, sum = 0;
        cin >> num;
        if (num == 1 || num == 2)
        {
            cout << num;
        }
        else
        {
            if (num % 3 == 0)
            {
                while(1){
                    int i = 2;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                    i--;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                }
            }
            else if (num % 3 == 1)
            {
                while(1){
                    int i = 1;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                    i++;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                }
            }
            else
            {
                while(1){
                    int i = 2;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                    i--;
                    sum = sum + i;
                    cout << i;
                    if(sum>=num){
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}