// Problem: A. Party
// Contest: Codeforces - Codeforces Beta Round #87 (Div. 1 Only)
// URL: https://codeforces.com/contest/115/problem/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms

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
    
    int arr[n+1],ans=0;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<=n;i++){
        int check=i;
        int cnt=0;
        while(arr[check]!=-1){
            check=arr[check];
            cnt++;   
        }
        
        ans=max(ans, cnt);
    }
    
    cout<<ans+1<<endl;
    
    rn;
}