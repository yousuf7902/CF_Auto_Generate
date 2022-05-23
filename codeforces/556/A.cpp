#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,cnt=0;
    cin>>n;

    string s;
    cin>>s;

    sort(s.begin(),s.end());

    for(int i=0, j=n-1;i<j;i++,j--){
        if(s[i]=='0' && s[j]=='1'){
            s[i]=' ';
            s[j]=' ';
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}