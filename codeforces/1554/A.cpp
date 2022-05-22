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

        long long int arr[n],maxNum=INT_MIN,minNum=INT_MAX,ans=INT_MIN;

        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1;i++){
            maxNum = max(arr[i], arr[i + 1]);
            minNum = min(arr[i], arr[i + 1]);

            ans = max(ans, (maxNum * minNum));
        }

        cout << ans << endl;
    }
    return 0;
}