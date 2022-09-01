// Problem: D. Line
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/D
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
#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         prec(n) fixed<<setprecision(n)
#define         py      cout << "Yes\n";
#define         pn      cout << "No\n";
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vc<ll>vec;
        
        ll mini=0,total=0;
        
        for(int i=0;i<n;i++){
            ll l=i;
            ll r=n-i-1;
            
            if(s[i]=='L'){
                if(l<r){
                    mini++;
                    total+=r;
                    vec.eb(r-l);
                }
                else{
                    total+=l;
                }
            }
            else{
                if(r<l){
                    mini++;
                    total+=l;
                    vec.eb(l-r);
                }
                else{
                    total+=r;
                }
            }
        }
        
        vc<ll>ans(n+1);
        
        for(int i=mini;i<=n;i++){
            ans[i]=total;
        }
        
        sort(vec.begin(),vec.end(),greater<int>());
        
        for(int i=mini-1;i>=1;i--){
            total-=vec.back();
            vec.pop_back();
            ans[i]=total;
        }
        
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    rn;
}