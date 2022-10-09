// Problem: B. Chloe and the sequence
// Contest: Codeforces - Codeforces Round #384 (Div. 2)
// URL: https://codeforces.com/contest/743/problem/B
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

int binary(ll left, ll right, ll need, int n){
    ll mid=left+(right-left)/2;
    
    if(need<mid){
        return binary(left, mid-1,need, n-1);
    }
    else if(need>mid){
        return binary(mid+1,right, need, n-1);
    }
    else{
        return n;
    }
}



int main(){
    FAST
    
    ll int n,k;
    cin>>n>>k;
    
    ll size=1;
    
    for(int i=1;i<n;i++){
        size=size*2+1;
    }
    
    cout<<binary(1,size, k , n)<<endl;

    rn;
}