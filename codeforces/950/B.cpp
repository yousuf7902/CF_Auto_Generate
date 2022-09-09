// Problem: B. Intercepted Message
// Contest: Codeforces - Codeforces Round #469 (Div. 2)
// URL: https://codeforces.com/problemset/problem/950/B
// Memory Limit: 512 MB
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

int main(){
    FAST
    
    int n,m;
    cin>>n>>m;
    
    int arr1[n],arr2[m],sum=0;
    
    for(int i=0;i<n;i++)cin>>arr1[i],sum+=arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    
    int a,b,ans=0;
    a=sum; b=sum;
    
    for(int i=0,j=0;i<n, j<m;){
        
        if(a>b){
            a-=arr1[i];
            i++;
        }
        else{
            b-=arr2[j];
            j++;
        }
        
        if(a==b)ans++;
        
    }
    
    if(a==0 && b==0)cout<<ans<<endl;
    else cout<<ans+1<<endl;
    
    rn;
}