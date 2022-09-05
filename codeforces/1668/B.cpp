// Problem: B. Social Distance
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1668/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms

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
        ll int n, m;
        cin>>n>>m;
        
        vc<int>vec;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            vec.eb(x);
        }
        

        sort(vec.begin(),vec.end());
        
        vec.eb(vec[0]);
        
        ll int ans=n;
        
        for(int i=0;i<vec.size()-1;i++){
            if(vec[i]<vec[i+1])ans+=vec[i+1];
            else ans+=vec[i];
        }
        
        
        if(ans<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
    rn;
}