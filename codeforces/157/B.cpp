// Problem: B. Trace
// Contest: Codeforces - Codeforces Round #110 (Div. 2)
// URL: https://codeforces.com/problemset/problem/157/B
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
#define pi                     3.141592653589793238
//
//===============================================================================
 
 
 
void solve(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    long double area1=0,area2=0,ans=0;
    
    sort(arr, arr+n);
    
    for(int i=0;i<n;i+=2){
            area1+=(arr[i]*arr[i]);
    }
    
    for(int i=1;i<n;i+=2){
        area2+=(arr[i]*arr[i]);
    }
    
    ans=abs(area1-area2)*pi;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
}
 
 
int main(){
    
        FAST
    
        //test
        
        solve();
 
        rn;
}