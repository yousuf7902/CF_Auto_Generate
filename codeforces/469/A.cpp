#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, p, q, count = 1;
    cin >> n;

    vector<int> vec;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }

    if(p==0 && q==0){
        cout << "Oh, my keyboard!" << endl;
        return 0;
    }
    
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++)
    {

        if (vec[i] != vec[i + 1])
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}