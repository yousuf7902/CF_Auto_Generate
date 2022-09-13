// Problem: B. Little Artem and Grasshopper
// Contest: Codeforces - Codeforces Round #348 (VK Cup 2016 Round 2, Div. 2 Edition)
// URL: https://codeforces.com/problemset/problem/669/B
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
    
    ll arr[n];
    string s;
    cin>>s;
    
    map<int,int>mapi;
    for(int i=0;i<n;i++)cin>>arr[i];
    
    ll ans=0;
    while(1){
        
        if(mapi[ans]>1){
            cout<<"INFINITE"<<endl;
            rn
        }
        
        mapi[ans]++;
        if(s[ans]=='>'){
            ans+=arr[ans];
        }
        else{
            ans-=arr[ans];
        }
        
        if(ans>n || ans<0 ){
            cout<<"FINITE"<<endl;
            rn
        }
    }

    
    rn;
}