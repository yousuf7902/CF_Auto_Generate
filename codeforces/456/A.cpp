// Problem: A. Laptops
// Contest: Codeforces - Codeforces Round #260 (Div. 2)
// URL: https://codeforces.com/problemset/problem/456/A
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
    int n;
    cin>>n;
    
    pr check;
    int maxi=INT_MIN;
    int one=0, two=0;
    while(n--){
        int a, b;
        cin>>a>>b;
        
        if(maxi<a){
            maxi=a;
            
            check.first=maxi;
            check.second=b;
        }
        
        if(a<b)one=1;
        else if(a>b)two=1;
    }
    //cout<<check.first<<" "<<check.second<<endl;
    if(check.first>check.second){
        cout<<"Happy Alex"<<endl;
    }
    else{
        
        if(one==1 && two==1){
            cout<<"Happy Alex"<<endl;
        }
        else{
            cout<<"Poor Alex"<<endl;
        }
        
    }
    
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}