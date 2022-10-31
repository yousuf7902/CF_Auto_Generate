// Problem: C. Minimize the Thickness
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1741/C?fbclid=IwAR2puHW2YwdB2rsovc93mzZF4jMIHXMwnUGHInzie2hncKixPNxu455bofA
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
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    int cnt=0,sum=0,ans=n,check=0,maxi;
    
    for(int i=0;i<n;i++){ 
     
        sum+=arr[i],cnt=0,check=0,maxi=i+1;
        
        for(int j=i+1;j<n;j++){
            cnt++;
            check+=arr[j];
        
            if(sum==check){
                maxi=max(maxi,cnt);
                cnt=0;
                check=0;
           }
           else if(check>sum){
               break;
           }
        }
        
        if(cnt==0){
            ans=min(ans, maxi);
        }
    }
    cout<<ans<<endl;
    
}


int main(){
    
        FAST
    
        test
        
        solve();

        rn;
}