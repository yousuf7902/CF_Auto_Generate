// Problem: A. Valera and X
// Contest: Codeforces - Codeforces Round #237 (Div. 2)
// URL: https://codeforces.com/contest/404/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    int n,dig_mark=0,alph_mark=0;
    cin>>n;
    
    char mat[n+1][n+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
        }
    }
    
    char alph=mat[1][2];
    char dig= mat[1][1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==1+n){
                if(mat[i][j]!=dig || mat[i][j]==alph){
                    dig_mark=1;
                    break;
                }
            }
            
            if(i!=j && i+j!=1+n){
                if(mat[i][j]!=alph || mat[i][j]==dig){
                    alph_mark=1; 
                    break; 
                }
                
            } 
        }
    }
    
    if(alph_mark==1 || dig_mark==1)pn
    else py
    
    
    rn;
}