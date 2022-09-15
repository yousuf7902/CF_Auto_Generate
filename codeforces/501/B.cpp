// Problem: B. Misha and Changing Handles
// Contest: Codeforces - Codeforces Round #285 (Div. 2)
// URL: https://codeforces.com/problemset/problem/501/B
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
    
    /*int q;
    cin>>q;
    
    map<string, string>mapi;
    map<string, string> :: iterator it;
    while(q--){
        string s, ss;
        cin>>s>>ss;
        
        int f=0;

        for(it=mapi.begin();it!=mapi.end();it++){
            if(it->second==s){
                it->second=ss;
                f=1;
                break;
            }
        }
        
        if(f==0){
            mapi[s]=ss;
        }
    }
    
    cout<<mapi.size()<<endl;
    for(auto it:mapi)cout<<it.first<<" "<<it.second<<endl;*/
    
    int t;
    cin>>t;
    
    map<string , string>mapi,ans;
    
    while(t--){
        string a,b;
        cin>>a>>b;
        
        if(mapi.find(a)==mapi.end()){
            mapi[a]=a;
        }
        mapi[b]=mapi[a];
        ans[mapi[a]]=b;
        
    }
    
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it.first<<" "<<it.second<<endl;
    
 
    rn;
}