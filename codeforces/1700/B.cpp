// Problem: B. Palindromic Numbers
// Contest: Codeforces - Codeforces Round #802 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1700/B
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
        string a,ans="";
        cin>>a;
        
        int carry=0;
        
        if(a[0]!='9'){
            for(int i=0;i<a.size();i++){
                cout<<9-(a[i]-'0');
            }
            cout<<endl;
        }
        else{
            
            for(int i=a.size()-1;i>=0;i--){
                int c=(a[i]-'0')+carry;
                
                if(c<=1){
                    ans.push_back('0'+ (1-c));
                }
                else{
                    ans.push_back('0'+ (11-c));
                }
                
                if(c>1)carry=1;
                else carry=0;
            }
            reverse(ans.begin(), ans.end());
            cout<<ans<<endl;
        }
        
        
    }
    rn;
}