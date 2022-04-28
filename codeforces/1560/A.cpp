#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int k;
        cin>>k;

        vector<int> arr1;

        for (int i = 1; arr1.size() < k;i++){
            if(i%3==0 || i%10==3){
                continue;
            }
            arr1.push_back(i);
        }

        cout << arr1[k-1] << endl;
    }

    return 0;
}