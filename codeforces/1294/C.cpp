// Problem: C. Product of Three Numbers
// Contest: Codeforces - Codeforces Round #615 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1294/C
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
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    
    return true;
}


void solve(){
    int n;
    cin>>n;
    
    int x=n;
    int cnt=0;
    if(prime(n)){
        cout<<"NO"<<endl;;
    }
    else{

        vector<int> vc;
        for(int i=2;i*i < n;i++){
        
            //cout<<n<<endl;
            if(n % i==0){
                n=n/i;
                vc.push_back(i);
                if(vc.size()== 2)break;
                //cout<<n<<endl;
            }
      
        }
        
        if(vc.size()== 2){
            vc.push_back(x / (vc[0]*vc[1]));
        }
        
        if(vc.size() == 3){
            cout<<"YES"<<endl;
            for(auto it: vc){
                cout<<it<<" ";
                
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }

}


int main(){
    
        FAST
    
        test
        
        solve();

        rn;
}