#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[3], count = 0, sum = 0;
    cin >> n;
    
    while(n--){
        for (int i = 0; i < 3;i++){
            cin >> arr[i];
        }
        for (int i = 0; i < 3;i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count>=2){
            sum++;
        }
        count = 0;
    }
    cout << sum;
}