// Problem: A. Creep
// Contest: Codeforces - Codeforces Round #800 (Div. 2)
// URL: https://codeforces.com/contest/1694/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//~"~"~"~"~"~"~"~"~"~"~"~"~  ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥   ~"~"~"~"~"~"~"~"~"~"~"~"~//  

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Yousuf Hassan || CSE,IUBAT || yousufhassan04@gmail.com         ## //
// ##                                                                         ## //
// ##                        CF Handle : Yousuf7902                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //

#include <bits/stdc++.h>
using namespace std;

//===============================================================================
//
#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         prec(n) fixed<<setprecision(n)
#define         py      cout << "Yes\n";
#define         pn      cout << "No\n";
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        
        string s;
        if(a<=b){
            for(int i=0;i<a*2;i++){
                if((i+1)%2!=0){
                    s=s+'0';
                }
                else{
                    s=s+'1';
                }
            }
            
            for(int i=0;i<b-a;i++){
                s=s+'1';
            }
        }
        else{
           for(int i=0;i<b*2;i++){
                if((i+1)%2!=0){
                    s=s+'0';
                }
                else{
                    s=s+'1';
                }
            }
            
            for(int i=0;i<a-b;i++){
                s=s+'0';
            }
            
        }
        
        cout<<s<<endl;
    }
    rn;
}