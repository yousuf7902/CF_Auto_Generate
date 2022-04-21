#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int r;
        cin >> r;

        if(r>=1900){
            cout << "Division 1" << endl;
        }
        else if(r>=1600 && r<=1899){
            cout << "Division 2" << endl;
        }
        else if(r>=1400 && r<=1599){
            cout << "Division 3" << endl;
        }
        else if(r<=1399){
            cout << "Division 4" << endl;
        }
        
    }

    return 0;
}
