#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, max=0,flag=0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);
        arr[n - 1] = arr[n - 1] - 1;
        if(arr[n-1]==0){
            cout << "YES" << endl;
        }
        else{
            for (int i = 0; i < n-1;i++){
                if(arr[n-1]<=arr[i]){
                    flag = 1;
                }
            }
            if(flag==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
    }

    return 0;
}