#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,cnt1=0,cnt2=0,cnt3=0;
        cin >> n;
        int arr[n],minNum = INT_MAX, maxNum = INT_MIN,maxps=0, minps=0;

        for (int i = 0; i < n;i++){
            cin >> arr[i];
            if(maxNum<arr[i]){
                maxNum = arr[i];
                maxps = i+1;
            }
            if(minNum>arr[i]){
                minNum =arr[i];
                minps = i+1;
            }
        }
        if(maxps<minps){
            swap(maxps, minps);
        }
        cout << min(maxps, min(((n - minps) + 1),minps + (n-maxps) + 1)) << endl;
    }

    return 0;
}