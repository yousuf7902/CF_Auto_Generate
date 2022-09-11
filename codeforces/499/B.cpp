// Problem: B. Lecture
// Contest: Codeforces - Codeforces Round #284 (Div. 2)
// URL: https://codeforces.com/problemset/problem/499/B
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
    
    int n,m;
    cin>>n>>m;
    
    string t[n], s[m][2];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>s[i][j];
        }
    }
    
    for(int i=0;i<n;i++)cin>>t[i];
    
    map<string,string>mapi;
    for(int i=0;i<m;i++){
        for(int j=0;j<1;j++){
            if(s[i][0].size()<=s[i][1].size()){
                mapi[s[i][0]]=s[i][0];
            }
            else{
                mapi[s[i][0]]=s[i][1];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<mapi[t[i]]<<" ";
    }
    
    
    rn;
}