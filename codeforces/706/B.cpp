// Problem: B. Interesting drink
// Contest: Codeforces - Codeforces Round #367 (Div. 2)
// URL: https://codeforces.com/problemset/problem/706/B
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
    
    int n;
    cin>>n;
    
    vc<int>vec;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.eb(x);
    }
    
    sort(vec.begin(),vec.end());
    
    int q;
    cin>>q;
    
    while(q--){
        int m,ans=0;
        cin>>m;
        
        int s=0, e=n-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(vec[mid]<=m){
                ans=mid+1;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
    rn;
}