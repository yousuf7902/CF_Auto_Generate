// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
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



int solve(){
    int n;
    cin>>n;
    
    int arr[n], x[n];
    
    for(int i=0;i<n;i++)cin>>arr[i], x[i]=arr[i];
    
    sort(x, x+n);
    
    int mx=INT_MIN, mini=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=x[i]){
            mini=i;
            mx=lower_bound(x, x+n, arr[i])-x;
            break;
        }
    }
    
    if(mini==INT_MAX){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
    }
    else{
        reverse(arr+mini, arr+mx+1);
        
        for(int i=0;i<n;i++){
            if(arr[i]!=x[i]){
                cout<<"no"<<endl;
                return 0;
            }
        }
        
        cout<<"yes"<<endl;
        cout<<mini+1<<" "<<mx+1<<endl;
    }
    
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}