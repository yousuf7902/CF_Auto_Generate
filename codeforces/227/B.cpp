// Problem: B. Effective Approach
// Contest: Codeforces - Codeforces Round #140 (Div. 2)
// URL: https://codeforces.com/problemset/problem/227/B
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
    
    ll int n,m;
    cin>>n;
    
    int arr[n+1];
    
    map<int,int>mapi1;
    for(int i=1;i<=n;i++)cin>>arr[i], mapi1[arr[i]]=i;
    
    cin>>m;
    
    ll int ans1=0,ans2=0;
    while(m--){
        int x;
        cin>>x;
        
        ans1+=mapi1[x];
        ans2+=(n-mapi1[x])+1;
        //cout<<mapi1[x]<<" "<<mapi2[x]<<endl;
    }
    
    cout<<ans1<<" "<<ans2<<endl;
    
    rn;
}