#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,even=0,odd=0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n;i++){
            cin >> arr[i];

            if(arr[i]==2){
                even++;
            }
            else{
                odd++;
            }
        }
            int sum;
            if(even!=0 && odd!=0){
                sum = even * 2 + odd;
            }
            else if(even==0){
                sum = odd;
            }
            else if(odd==0){
                sum = even;
            }
            
            if(sum%2==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        
    }

    return 0;
}