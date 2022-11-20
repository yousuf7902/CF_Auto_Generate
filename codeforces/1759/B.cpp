// Problem: B. Lost Permutation
// Contest: Codeforces - Codeforces Round  #834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/B
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
    int n,s;
    cin>>n>>s;
    
    int arr[n],f=0,ch=0;
    
    vc vec;
    map<int, int>mapi;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        vec.eb(arr[i]);
        
        mapi[arr[i]]++;
        if(mapi[arr[i]]>1){
            f=1;
        }
    }
    
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        
        int ans=0;
        for(int i=1;i<=100;i++){
            if(s==0){
                break;
            }
            else if(s<0){
                ans=1;
                break;
            }
            
            if(mapi[i]==0){
                vec.eb(i);
                s-=i;
            }
        }
        
        sort(vec.begin(), vec.end());
        
        
        for(int i=1;i<=vec.size();i++){
            if(vec[i-1]!=i){
               ans=1;
               break; 
            }
        }
        
        if(ans)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}


int main(){
    
        FAST
    
        test
        
        solve();

        rn;
}