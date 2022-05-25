#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long int arr1[n];

        for (int i = 0; i < n;i++){
            cin >> arr1[i];
        }

        long long int m;
        cin >> m;

        long long int arr2[m],ans=0;

        for (int i = 0; i < m;i++){
            cin >> arr2[i];

            ans = ans + arr2[i];
        }

        cout << arr1[ans % n] << endl;
    }
}