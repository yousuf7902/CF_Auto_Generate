#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    string word;
    cin >> n;
    while(n--){
        cin >> word;
        int size = word.size();
        for (int i = 0; i < size;i++){
            if(i!=0 && i!=size-1){
                count++;
            } 
        }
        if(size>10){
            cout << word[0] << count << word[size - 1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
        count = 0;
    }
}