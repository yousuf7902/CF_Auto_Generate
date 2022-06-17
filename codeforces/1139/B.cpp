// Problem: B. Chocolates
// Contest: Codeforces - Codeforces Round #548 (Div. 2)
// URL: https://codeforces.com/contest/1139/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
    
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    reverse(arr, arr+n);
    
    ll int j=arr[0],sum=arr[0];
    
    for(int i=1;i<n;i++){
        if(j<=arr[i]){
            arr[i]=j-1;
            if(arr[i]<0){
                arr[i]=0;
            }
        }
        sum=sum+arr[i];
        j=arr[i];
    }
    cout<<sum<<endl;
    
    rn;
}