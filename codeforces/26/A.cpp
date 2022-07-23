// Problem: A. Almost Prime
// Contest: Codeforces - Codeforces Beta Round #26 (Codeforces format)
// URL: https://codeforces.com/contest/26/problem/A
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

int arr[4100];

void sieve(){
    
    for(int i=2;i<=4000;i++){
        if(arr[i]==0){
            for(int j=i*2;j<4000;j+=i){
                arr[j]++;
            }
        }
    }
}


int main(){
    FAST
    
    sieve();
    int n,ans=0;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(arr[i]==2)ans++;
    }
    
    cout<<ans<<endl;
    
    rn;
}