#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            int pos=n;

            for(int j=i; j<n; j++){

                if(s[i]==s[j])
                {
                    continue;
                }
                else
                {
                    pos=j;
                    break;
                }
            }

            for(int j=pos ;j<n ;j++){
                if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
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
