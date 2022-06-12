// Problem: A. Lineland Mail
// Contest: Codeforces - Codeforces Round #Pi (Div. 2)
// URL: https://codeforces.com/contest/567/problem/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 

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
    
    int n;
    cin>>n;
    
    int arr[n+1],maxi=INT_MIN,mini=INT_MAX;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
        
    }
    
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<abs(mini-arr[i+1])<<" "<<abs(mini-maxi)<<endl;;
        }
        else if(i==n){
            cout<<abs(maxi-arr[i-1])<<" "<<abs(maxi-mini)<<endl;
        }
        else{
            int c1,c2,num1,num2;
            c1=abs(arr[i]-arr[i+1]);
            c2=abs(arr[i]-arr[i-1]);
            num1=abs(arr[i]-maxi);
            num2=abs(arr[i]-mini);
            cout<<min(c1,c2)<<" "<<max(num1,num2)<<endl;

        }
    }
    rn;
}
