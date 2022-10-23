// Problem: B. Sereja and Contests
// Contest: Codeforces - Codeforces Round #235 (Div. 2)
// URL: https://codeforces.com/problemset/problem/401/B
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
    int x,k;
    cin>>x>>k;
    
    int t,a,b;
    
    map<int , int> vis;
    
    for(int i=0;i<k;i++){
        cin>>t;
        
        if(t==2){
            cin>>a;
            vis[a]=1;
        }
        else{
            cin>>a>>b;
            vis[a]=1;
            vis[b]=1;
        }
    }
    
    int cnt=0;
    vc v;
    
    for(int i=1;i<=x;i++){
        if(vis[i]){
            cnt++;
        }
        else {
            v.eb(i);
        }
    }
    
    int mx=x-cnt-1;
    
    cnt=0;
    
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]==1){
            i++;
            cnt++;
        }
        else{
            cnt++;
        }
    }
    
    cout<<cnt<<" "<<mx<<endl;
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}