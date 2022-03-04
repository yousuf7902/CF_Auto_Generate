#include<bits/stdc++.h>
using namespace std;


int main(){
    int long long n, k;
    cin >> n >> k;
    int long long red, green, blue,sum;
    red = n * 2;
    green = n * 5;
    blue = n * 8;
    if(red%k==0){
        red = red / k;
    }
    else{
        red = (red / k) + 1;
    }
    if(green%k==0){
        green = green / k;
    }
    else{
        green = (green / k) + 1;
    }
    if(blue%k==0){
        blue = blue / k;
    }
    else{
        blue = (blue / k) + 1;
    }
    cout << red+green+blue << endl;
    return 0;
}