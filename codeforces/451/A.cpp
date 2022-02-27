#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, count = 0;
    cin >> n >> m;

    while(n!=0 && m!=0){
        count++;
        n--;
        m--;
    }
    if(count%2==0){
        cout << "Malvika" << endl;
    }
    else{
        cout << "Akshat" << endl;
    }
    return 0;
}