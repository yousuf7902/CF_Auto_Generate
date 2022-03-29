#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,i=0,flag=0;
        string s;

        cin>>n>>s;

        while(i<n){

            if(s[i]!=s[i+1]){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        flag=1;
                        break;
                    }
                }
            }
            i++;
        }
        if(flag>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
