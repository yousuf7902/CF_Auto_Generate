// Problem: B. Decode String
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/B
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
    
    int t;
    cin>>t;
    
    while(t--){
        string al="abcdefghijklmnopqrstuvwxyz";
        
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vc<char>vec;
        for(int i=s.size()-1;i>=0;){
            if(s[i]!='0'){
                int x=(s[i]-'0');
                vec.eb(al[x-1]);
                i--;
            }
            else{
                string ch;
                ch+=s[i-1];
                ch+=s[i-2];
                reverse(ch.begin(),ch.end());
                int num=stoi(ch);
                vec.eb(al[num-1]);
                i-=3;
            }
        }
        
        reverse(vec.begin(),vec.end());
        for(auto it: vec)cout<<it;
        cout<<endl;
        
    }
    
    
    rn;
}