// Problem: B. Growing Mushrooms
// Contest: Codeforces - Codeforces Round #118 (Div. 2)
// URL: https://codeforces.com/problemset/problem/186/B
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
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    
    vector< pair<double,int>> vec;

    
    for(int i=1;i<=n;i++){
        
        int x,y;
        cin>>x>>y;
        
        double c=(double)k/100;
        
        double a=(x*t1)-((x*t1)*c)+(y*t2);
        swap(x,y);
        double b=(x*t1)-((x*t1)*c)+(y*t2);
        
        double m=max(a,b); 
        
        vec.push_back({m, -i});
          
    }
    
    sort(vec.rbegin(), vec.rend());
    
    for(auto it: vec){
        cout<<it.second*(-1)<<" "<<fixed<<setprecision(2)<<it.first<<endl;
    }
    

}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}