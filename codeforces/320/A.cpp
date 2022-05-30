// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round #189 (Div. 2)
// URL: https://codeforces.com/problemset/problem/320/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 

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
#define         py      cout << "YES\n";
#define         pn      cout << "NO\n";
#define         endl    "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    string s;
    cin>>s;
    
    vc <char>vec;
    if(s.size()==1 && s[0]=='1')py
    else if(s.size()==1 && s[0]!='1')pn
    else{
        for(int i=0;i< s.size()-2;i++){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){  
            vec.eb(s[i]);
            vec.eb(s[i+1]);
            vec.eb(s[i+2]);
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
            i+=2;
        }
    }
    
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='1' && s[i+1]=='4'){
            
            vec.eb(s[i]);
            vec.eb(s[i+1]);
            s[i]=' ';
            s[i+1]=' ';
            i++;
        }
    }
    
    for(int i=0;i<=s.size();i++){
        if(s[i]=='1'){
            vec.eb(s[i]);
            s[i]=' ';
        }
    }
    
    if(vec.size()==s.size())py
    else pn
        
    }
    
    rn;
}