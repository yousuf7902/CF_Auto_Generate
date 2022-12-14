// Problem: A. IQ test
// Contest: Codeforces - Codeforces Beta Round #25 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/25/A
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
    
    int arr[n+1],e=0,o=0;
    
    map<int, int> mapi;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        
        if(arr[i]%2==0){
            mapi[arr[i]]++;
            e++;
        }
        if(arr[i]%2!=0){
            o++;
        }
    }
    
    for(int i=1;i<=n;i++){
        if(e>o){
          if(mapi[arr[i]]==0){
              cout<<i<<endl;
              break;
          }  
        }
        else{
            if(mapi[arr[i]]==1){
                cout<<i<<endl;
                break;
            }
        }
    }
    
    rn;
}