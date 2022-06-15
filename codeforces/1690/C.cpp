// Problem: C. Restoring the Duration of Tasks
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
#define         vc vector<int>
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
        
        int s[n],f[n];
        
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        
        vc vec;
        for(int i=0;i<n;i++){
            if(s[i]<f[i]){
                if(i==0){
                    vec.eb(abs(s[i]-f[i]));
                }
                else{
                    if(s[i]>f[i-1]){
                        vec.eb(abs(s[i]-f[i]));
                    }
                    else{
                        vec.eb(abs(f[i-1]-f[i]));
                    }
                }
            } 
        }
        
        for(auto it:vec){
            cout<<it<<" ";
        }
        
        cout<<endl;
    }
    
    rn;
}