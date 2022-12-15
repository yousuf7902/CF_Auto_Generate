// Problem: A. Divide and Conquer
// Contest: Codeforces - Codeforces Round #838 (Div. 2)
// URL: https://codeforces.com/contest/1762/problem/A
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
    ll n,sum=0;
    cin>>n;
    
    vc vec(n);
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
        
        sum+=vec[i];
    }
    
    if(sum%2==0)cout<<0<<endl;
    else{
        ll op=INT_MAX, ans=0;
        
        for(int i=0;i<n;i++){
            int temp=sum;
            ans=0;
            
            while(vec[i]>0){
                temp-=vec[i];
                vec[i]/=2;
                temp+=vec[i];
                ans++;
                
                if(temp%2==0)break;
            }
            
            op=min(ans,op);
        }
        cout<<op<<endl;
    }
}


int main(){
    
        FAST
    
        test
        
        solve();

        rn;
}