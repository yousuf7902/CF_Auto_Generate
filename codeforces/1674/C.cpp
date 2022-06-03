// Problem: C. Infinite Replacement
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 

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
        string s,t;
        cin>>s>>t;
        
        ll int f=0,ans;
        if(t.size()==1 && t[0]=='a'){
            ans=1;
            cout<<ans<<endl;
            continue;
        }
        else{
            for(int i=0;i<t.size();i++){
                if(t[i]=='a'){
                    f++;
                    break;
                }
            }
        }
        
        if(f>0){
            ans=-1;
            cout<<ans<<endl;
        }
        else{
            int n=s.size();
            ans=pow(2,n);
            cout<<ans<<endl;
        }
    }
    rn;
}
