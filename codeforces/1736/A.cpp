// Problem: A. Make A Equal to B
// Contest: Codeforces - Codeforces Round #825 (Div. 2)
// URL: https://codeforces.com/contest/1736/problem/A
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
        int n;
        cin>>n;
    
        int a[n],b[n];
    
        map<int, int> a_cnt;
        map<int, int> b_cnt;
    
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        
            if(a[i]==1)a_cnt[a[i]]++;
       }
    
        for(int i=0;i<n;i++){
            cin>>b[i];
        
            if(b[i]==1)b_cnt[b[i]]++;
       }
        
       int ans=abs(a_cnt[1]-b_cnt[1]),f=0;
       
       
       for(int i=0;i<n;i++){
           if(f==ans)break;
           if(a[i]!=b[i]){
               if(a[i]==0){
                   a[i]=abs(a[i]-b[i]);
               }
               else{
                   b[i]=abs(a[i]-b[i]);
               }
               f++;
           }
       }
        
        int check=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                check=1;
                break;
            }
        }
        
        if(check==0){
            cout<<ans<<endl;
        }
        else{
             cout<<ans+1<<endl;
        }
    }
    
    rn;
}