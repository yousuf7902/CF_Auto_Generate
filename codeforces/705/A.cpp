#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s1 = "I hate ", s2="I love ",s3 ;
        for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
            if(i==n){
                s3 = s3+s1 + "it ";
            }
            else{
                s3 = s3+ s1 + "that ";
            }
        }
        else{
            if(i==n){
                s3 =s3 + s2 + "it ";
            }
            else{
                s3 =s3+s2 + "that ";
            }
        }
    }

    cout << s3 << endl;
    return 0;
}