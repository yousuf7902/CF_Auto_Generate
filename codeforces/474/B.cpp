// Problem: B. Worms
// Contest: Codeforces - Codeforces Round #271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/B
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
    
    vc vec(n),ans(n);
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    
    int m;
    cin>>m;
    
    for(int i=0;i<n;i++){
        if(i==0)ans[i]=vec[i];
        else{
            ans[i]=vec[i-1]+vec[i];
            vec[i]=ans[i];
        }
    }
    
    sort(ans.begin(), ans.end());
    while(m--){
        int x;
        cin>>x;
        
        int low=0, hi=ans.size()-1;
        
        int a=0;
        while(low <= hi){
            int mid=(low+hi)/2;
            
            if(ans[mid]< x){
                low=mid+1;
            }
            else{
                a=mid;
                hi=mid-1;
            }
        }
        cout<<a+1<<endl;
    }
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}