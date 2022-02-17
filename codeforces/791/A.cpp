#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, b,years=0;
    cin >> l >> b;
    while(l<=b){
        years++;
        l = l * 3;
        b = b * 2;
        
    }
    cout << years;
}