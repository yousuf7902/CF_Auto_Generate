#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,x=0,count=0;
    float sum=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }

    sum = sum / 2;
    for (int i = 0; i < n ;i++){
        for (int j = 0; j <n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }

    for (int i = 0; i < n;i++){
            x = x + arr[i];
            count++;
            if(x>sum){
                cout << count;
                return 0;
            }
    }
}
