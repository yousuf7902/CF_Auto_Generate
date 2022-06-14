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
#define	        endl     "\n"
#define         rn return 0;
//
//===============================================================================
 
int main(){
    FAST
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int arr[n+1],sum=0;
        
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            
            sum=sum+arr[i];
        }
        
        if(sum<=m){
            cout<<0<<endl;
        }
        else{
            cout<<sum-m<<endl;
        }
    }
    
    rn;
}