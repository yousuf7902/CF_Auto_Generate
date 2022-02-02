#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,sum=0,count=0;
    cin >> w;

    for (int i = 2; i <= w;i+=2){
        for (int j = 2; j <= w;j+=2){
            sum = i + j;
            if(sum==w){
                count++;
            }
        }
    }
    if(count>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}