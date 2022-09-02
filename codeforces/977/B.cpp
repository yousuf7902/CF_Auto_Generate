// Problem: B. Two-gram
// Contest: Codeforces - Codeforces Round #479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
    
    int n,ans=0,cnt=0;
    cin>>n;
    
    string s;
    cin>>s;
    
    
    
    map<int,string> mapi;
    
    for(int i=0;i<s.size()-1;i+=2){
        cnt=0;
        string t="";
        t+=s[i];
        t+=s[i+1];
        
        for(int j=0;j<s.size();j++){
            string p="";
            p+=s[j];
            p+=s[j+1];
            
            
            if(t==p){
                cnt++;
                mapi[cnt]=t;
                ans=max(ans,cnt);
            }
        }
    }
    cout<<mapi[ans]<<endl;
   
    
    rn;
}