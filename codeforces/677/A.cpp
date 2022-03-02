#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h,count=0;
    cin >> n >> h;

    while(n--){
        int a;
        cin >> a;
        if(a>h){
            count += 2;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
    return 0;
}