#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x;
    cin >> x;
    long long int length = x.size();

    for (int i = 0; i < length;i++){
        if(x[i]>'4'){
            if(x[i]=='9' && i==0){
                x[i] = x[i];
            }
            else{
                x[i] = ('9' - x[i])+48;
            }
            
        }
    }
    cout << x << endl;
    return 0;
}