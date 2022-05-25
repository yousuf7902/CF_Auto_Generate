#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;


    while(t--){
        int n,sum=0,flag=0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n;i++){
            sum = 0;
            for (int j = 0; j < n;j++){
                if(j!=i){
                    sum = sum + arr[j];
                }
            }
            double ans = (double)sum / (n - 1);
            if(arr[i]==ans){
                flag = 1;
                break;
            }
        }

        if(flag==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}