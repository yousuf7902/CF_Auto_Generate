#include<bits/stdc++.h>
using namespace std;

void check(){
    int num;
    cin >> num;

    bool f;
    if((num-1)%3==0){
        f = true;
    }
    else{
        f = false;
    }

    while(num!=0){
        if(f){
            cout << 1;
            num--;
            f = false;
        }
        else{
            cout << 2;
            num -= 2;
            f = true;
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; while(t--)

    check();
}