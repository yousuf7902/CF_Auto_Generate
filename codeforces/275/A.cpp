// Problem: A. Lights Out
// Contest: Codeforces - Codeforces Round #168 (Div. 2)
// URL: https://codeforces.com/problemset/problem/275/A
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

typedef bool                              boo;
typedef long long int                     ll;
typedef unsigned long long int            l1;
typedef double                            db;
typedef vector<ll>                        vc;
typedef set<ll>                           st;
typedef pair<ll, ll>                      pr;
typedef map<ll, ll>                       mpll;
typedef map<ll,char>                      mpchar;
typedef vector<pair<ll,ll>>               pr_vc;


//===============================================================================
//

#define                        FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define test                   int t;cin>>t;while(t--)
#define eb                     emplace_back
#define prec(n)                fixed<<setprecision(n)
#define py                     cout << "Yes\n";
#define pn                     cout << "No\n";
#define pY                     cout << "YES\n";
#define pN                     cout << "NO\n";
#define endl                   "\n"
#define F                      first
#define S                      second
#define gcd(a,b)               __gcd(a,b);
#define rn                     return 0;

//
//===============================================================================



void solve(){
    int a[4][4],b[4][4];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j]; 
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=1;
        }
    }
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            if(a[i][j]%2!=0){

                if(b[i][j]==1)b[i][j]=0;
                else b[i][j]=1;
                
                if(b[i+1][j]==1)b[i+1][j]=0;
                else b[i+1][j]=1;
                
                if(b[i-1][j]==1)b[i-1][j]=0;
                else b[i-1][j]=1;
                
                if(b[i][j+1]==1)b[i][j+1]=0;
                else b[i][j+1]=1;
                
                if(b[i][j-1]==1)b[i][j-1]=0;
                else b[i][j-1]=1;
                
            }
            
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}