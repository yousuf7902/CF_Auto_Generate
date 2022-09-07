// Problem: B. Fence
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
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
    
    int n,k;
    cin>>n>>k;
    
    ll int arr[n+1];
    
    for(int i=1;i<=n;i++)cin>>arr[i];
    
    int mini=INT_MAX,check=0,ans=0;
    for(int i=1;i<=k;i++)check+=arr[i];
    
    mini=min(mini, check);
    
    int f=1;
    for(int i=k+1;i<=n;i++){
        
        check-=arr[f];
        check+=arr[i];
        f++;
        
        if(check<mini){
            mini=check;
            ans=f;
        }
    }
    
    if(ans==0)cout<<1<<endl;
    else cout<<ans<<endl;
    
    rn;
}