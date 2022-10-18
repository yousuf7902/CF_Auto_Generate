// Problem: C. Traffic Light
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/C
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

typedef bool                      boo;
typedef long long int             ll;
typedef unsigned long long int    l1;
typedef double                    db;
typedef vector<ll>                vc;
typedef set<ll>                   st;
typedef pair<ll, ll>              pr;
typedef map<ll, ll>               mpll;
typedef map<ll,char>              mpchar;
typedef vector<pair<ll,ll>>       pr_vc;


//===============================================================================
//

#define                  FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define test             int t;cin>>t;while(t--)
#define eb               emplace_back
#define prec(n)          fixed<<setprecision(n)
#define py               cout << "Yes\n";
#define pn               cout << "No\n";
#define pY               cout << "YES\n";
#define pN               cout << "NO\n";
#define endl             "\n"
#define F                first
#define S                second
#define gcd(a,b)         __gcd(a,b);
#define rn               return 0;

//
//===============================================================================



void solve(){
    
    int n;
    cin>>n;
    
    char ch;
    cin>>ch;
    
    string s;
    cin>>s;
    
    s=s+s;
    
    int ans=0;
    if(ch=='g'){
        cout<<0<<endl;
    }
    else{
        int cnt=0,f=0;
    
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                f=1;
            }
            
            if(s[i]=='g' && f){
                ans=max(ans,cnt);
                cnt=0;
                f=0;
            }
            else if(f && s[i]!='g'){
                cnt++;
            }
            
        }
        cout<<ans<<endl;
    }
    
    
    
    
}


int main(){
         FAST
    
         test
        
         solve();

         rn;
}