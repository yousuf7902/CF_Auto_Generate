// Problem: C. Different Differences
// Contest: Codeforces - Codeforces Round #839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/C
// Memory Limit: 512 MB
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
    int k,n;
    cin>>k>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    
    vc vec;
    
    vec.push_back(arr[0]);
    vec.push_back(arr[1]);

    int cnt=1, track=arr[1];
    
    for(int i=2;i<n;i++){
        if((arr[i]-track) > cnt){
            
            cnt=arr[i]-track;
            track=arr[i];
            vec.push_back(arr[i]);
            
        }
    }
    
    if(vec.size()== k){
        for(auto it: vec){
            cout<<it<<" ";
        }
    }
    else if(vec.size() > k){
        for(int i=0;i<k;i++){
           cout<<vec[i]<<" ";
        }
    }
    else{
        
        int take= k - vec.size();
        
        map<int, int>mapi;
        for(int i=0;i<vec.size();i++){
            mapi[vec[i]]= 1;
        }
        
        
        for(int i=n-1;i>=0;i--){
            if(take==0)break;
            if(mapi[arr[i]]== 0){
                vec.push_back(arr[i]);
                take--;
            }
        }
        
        sort(vec.begin(), vec.end());
        
        for(auto it:vec){
            cout<<it<<" ";
        }
    }
    cout<<endl;
}


int main(){
    
        FAST
    
        test
        
        solve();

        rn;
}