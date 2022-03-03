#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, group = 0, flag = 0;
    cin >> n;

    while (n--)
    {

        int a;
        cin >> a;
        if (a == 10)
        {
            flag = 0;
            count++;
            if (count == 1)
            {
                group++;
            }
        }
        else{
            count = 0;
            flag++;
            if(flag==1){
                group++;
            }
        }
    }
    cout << group << endl;

    return 0;
}