#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    string word;
    cin >> n;
    while(n--){
        cin >> word;
        int size = word.size();
            if(size<=10){
                cout << word << endl;
            } 
            else{
                cout << word[0] << size-2 << word[size - 1]<<endl;
            }
    }
}