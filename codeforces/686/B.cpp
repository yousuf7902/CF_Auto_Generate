// Problem: B. Little Robber Girl's Zoo
// Contest: Codeforces - Codeforces Round #359 (Div. 2)
// URL: https://codeforces.com/contest/686/problem/B
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
    
    int n;
    cin>>n;
    
    int arr[n+1];
    
    for(int i=1;i<=n;i++)cin>>arr[i];
    
    
    vc<int>l, r;
    
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                l.eb(j);
                r.eb(j+1);
            }
        }
    }
    
    for(int i=0;i<r.size();i++){
        cout<<l[i]<<" "<<r[i]<<endl;
    }
    
    rn;
}