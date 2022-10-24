// Problem: B. DZY Loves Strings
// Contest: Codeforces - Codeforces Round #FF (Div. 2)
// URL: https://codeforces.com/problemset/problem/447/B
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
    string s;
    cin>>s;
    int k;
    cin>>k;
    
    string ch="abcdefghijklmnopqrstuvwxyz";
    map<char ,int>mapi;
    
    int n=0;
    vc vec;
    int maxi=INT_MIN;
    int size=ch.size();
    
    while(size--){
        int x;
        cin>>x;
        
        if(maxi<x){
            maxi=max(maxi,x);
            vec.eb(maxi);
        }
        
        mapi[ch[n]]=x;

        n++;
    }
    
    sort(vec.begin(),vec.end(),greater<int>());
    
    
    ll ans=0;
    for(int i=0;i<s.size();i++){
        ans=ans+(i+1)* mapi[s[i]];
    }
    
    size=s.size();
    while(k--){
        size++;
        ans+=(size*vec[0]);
    }
    
    cout<<ans<<endl;
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}