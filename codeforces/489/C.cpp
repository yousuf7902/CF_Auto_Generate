// Problem: C. Given Length and Sum of Digits...
// Contest: Codeforces - Codeforces Round #277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/C?fbclid=IwAR32DYtC0OldI6A4UePvUml0_Z8vLzglL8NCGtlcwZ0nxSv2pp47RpAy0Og
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
    int m, s;
    cin>>m>>s;
    
    string maxi="", mini="";
    
    
    if(s==0 && m>1 || m*9 < s){
        cout<<"-1 -1"<<endl;
    }
    else{
        
        int num=s;
        
        for(int i=1;i<=m;i++){
            if(num>9){
                maxi+='9';
                num-=9;
            }
            else if(num>0){
                maxi+=(num+'0');
                num-=num;
            }
            else{
                maxi+='0';
            }
        }
        
        string mini=maxi;
        reverse(mini.begin(),mini.end());

        
        int low=0;
        
        for(int i=0;i<mini.size();i++){
            if(mini[i]!='0'){
                low=i;
                break;
            }
        }
        
        if(mini[0]=='0'){
            mini[0]++;
            mini[low]--;
        }
        
        cout<<mini<<" "<<maxi<<endl;
    }
}


int main(){
    
        FAST
    
        //test
        
        solve();

        rn;
}