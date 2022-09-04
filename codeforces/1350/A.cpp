// Problem: A. Orac and Factors
// Contest: Codeforces - Codeforces Round #641 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1350/A
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
int divi(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
}


int main(){
    FAST
    
    int t;
    cin>>t;
    
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        
        if(n%2==0){
            ans=n+(k*2);
            n=ans;
        }
        else{
            int f;
            if(n==1)f=1;
            else f=divi(n);
                
            ans=f+n+((k-1)*2);
            n=ans;
        }
        
        cout<<n<<endl;
    }
    
    rn;
}