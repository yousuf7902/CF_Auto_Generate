#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    string n1,n2;
    cin >> n1>>n2;
    for (int i = 0; i < n1.size();i++){
        n1[i] = tolower(n1[i]);
        n2[i] = tolower(n2[i]);
    }
    if(n1<n2){
        count = -1;
    }
    else if(n1>n2){
        count = 1;
    }
    cout << count;
}