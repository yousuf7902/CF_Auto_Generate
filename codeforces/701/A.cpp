#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n], new_arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        new_arr[i] = arr[i];
    }

    sort(arr, arr + n);
    int maxNum = arr[0] + arr[n - 1];

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(new_arr[i]+new_arr[j]==maxNum){
                new_arr[i] = 0;
                new_arr[j] = 0;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
        return 0;
}