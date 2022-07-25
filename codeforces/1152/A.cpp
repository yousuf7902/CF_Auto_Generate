// Problem: C - C
// Contest: Virtual Judge - Solo Speed Contest - 49
// URL: https://vjudge.net/contest/506718#problem/C
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
    
    int n,m;
    cin>>n>>m;
    
    int c[n],keys[m],c_odd=0,c_even=0,k_odd=0,k_even=0;
    
    for(int i=0;i<n;i++){
        cin>>c[i];
        
        if(c[i]%2==0)c_even++;
        else c_odd++;
    }
    
    for(int i=0;i<m;i++){
        cin>>keys[i];
        
        if(keys[i]%2==0)k_even++;
        else k_odd++;
    }
    
    int ans=0; 
    
    if((k_odd==0 && c_odd==0) || (c_even==0&& k_even==0)){
        cout<<ans<<endl;
    }
    else{
        ans=min(c_even,k_odd)+min(k_even,c_odd);
        cout<<ans<<endl;
    }
    
    rn;
}