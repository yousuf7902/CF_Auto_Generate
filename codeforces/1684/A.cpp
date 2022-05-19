#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        vector<int> vec;
        long long int n;
        cin >> n;
        while(n>0){
            vec.emplace_back(n % 10);
            n = n / 10;
        }

        if(vec.size()==2){
            cout << vec[0] << endl;
        }
        else{
            sort(vec.begin(), vec.end());
            cout << vec[0] << endl;
        }
    }
    return 0;
}