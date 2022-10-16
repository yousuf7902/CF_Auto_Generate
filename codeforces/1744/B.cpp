// Problem: B. Even-Odd Increments
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/B
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
    
    int t;
    cin>>t;
    
    while(t--){
        ll n ,q;
        cin>>n>>q;
        
        ll int arr[n],sum=0,even=0,odd=0;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            
            if(arr[i]%2==0)even++;
            else odd++;
        }
        
        while(q--){
            ll ty, x;
            cin>>ty>>x;
            
            if(ty==0){
                sum+=(even*x);
                
                if(x%2!=0){
                    odd=odd+even;
                    even=0;
                }

            }
            else{
                sum+=(odd*x);
                if(x%2!=0){
                    even=even+odd;
                    odd=0;
                }
            }
            
            cout<<sum<<endl;
        }
        
    }
    
    rn;
}