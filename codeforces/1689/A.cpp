// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
        
        int a, b, k;
        cin>>a>>b>>k;
        
        string s1,s2,ex;
        cin>>s1>>s2;
        
        sort(s1.begin(),s1.end());
        
        sort(s2.begin(),s2.end());
        
        int i=0,j=0, s1cnt=k,s2cnt=k;
         
         while(true){
             if((s1[i]<=s2[j] && s1cnt!=0) || s2cnt==0){
                 ex=ex+s1[i];
                 
                 s1cnt--;
                 s2cnt=k;
                 
                 i++;
             }
             else{
                 ex=ex+s2[j];
                 
                 s2cnt--;
                 s1cnt=k;
                 
                 j++;
             }
             
             if(i==a || j==b){
                 break;
             }
         }
        cout<<ex<<endl;
  
    }
        
    rn;
}