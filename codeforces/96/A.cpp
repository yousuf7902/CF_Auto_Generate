#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0;
    string team;
    cin >> team;

    for (int i = 0; i < team.size();i++){
        if(team[i]=='1'){
            a++;
            /* cout << "a=" << a << " "
                 << "b=" << b << endl; */
            if(a>=7){
                cout << "YES";
                return 0;
            }
            else{
                b = 0;
            }
        }
        else if(team[i]=='0'){
            b++;
            if(b>=7){
                cout << "YES";
                return 0;
            }
            else{
                a = 0;
            }
            
        }
    }
    if(a<7 || b<7){
        cout << "NO";
    }
}