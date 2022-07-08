// Problem: B. Ehab Is an Odd Person
// Contest: Codeforces - Codeforces Round #563 (Div. 2)
// URL: https://codeforces.com/contest/1174/problem/B
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


int main(){
    FAST
    
    int n;
    cin>>n;
    
    int arr[n],even=0,odd=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        if(arr[i]%2==0)even++;
        else odd++;
    }
    
    if((odd==0 and even !=0) || (even==0 and odd!=0)){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    
    rn;
}