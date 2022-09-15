// Problem: B. Text Document Analysis
// Contest: Codeforces - Codeforces Round #375 (Div. 2)
// URL: https://codeforces.com/problemset/problem/723/B
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
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int cnt=0,maxi=0,num=0;
    for(int i=0;i<s.size();i++){
        
        if(s[i]=='('){
            int ch=0;
            cnt=0;
            for(int j=i+1;j<n;j++){
                if(s[j]==')'){
                    if(ch>0)num++;
                    i=j;
                    break;
                }
                
                if(s[j]=='_'){
                    if(ch>0)num++;
                    ch=0;
                }
                
                if(s[j]!='_')ch++;
            }
        }
        else{
            if(s[i]!='_'){
                cnt++;
                maxi=max(maxi, cnt);
            }
            else{
                cnt=0;
            }
        }
        
    }
    
    cout<<maxi<<" "<<num<<endl;
    
    rn;
}