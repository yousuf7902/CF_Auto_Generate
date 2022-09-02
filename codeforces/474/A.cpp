// Problem: A. Keyboard
// Contest: Codeforces - Codeforces Round #271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
    
    char c;
    cin>>c;
    
    string s,check="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>s;
    
    vc<char>vec;
    
    if(c=='R'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<check.size();j++){
                if(s[i]==check[j]){
                    vec.eb(check[j-1]);
                }
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            for(int j=0;j<check.size();j++){
                if(s[i]==check[j]){
                    vec.eb(check[j+1]);
                }
            }
        }
    }
    
    for(auto it:vec){
        cout<<it;
    }
    
    rn;
}