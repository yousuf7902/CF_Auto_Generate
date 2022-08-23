// Problem: B. Sherlock and his girlfriend
// Contest: Codeforces - ICM Technex 2017 and Codeforces Round #400 (Div. 1 + Div. 2, combined)
// URL: https://codeforces.com/contest/776/problem/B
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
const int sp=1e6+10;

vc <int> check(sp, 1);
vc <int> prime;

void seive(){
   check[0]=2;
   check[1]=2;
   
   for(int i=2;i*i<sp;i++){
       if(check[i]==1){
           for(int j=2*i;j<sp;j+=i){
               check[j]=2;
           }
       }
   } 
   
   for(int i=1;i<sp;i++){
       prime.eb(check[i]);
   }
}

int main(){
    FAST
    seive();
    
    int n;
    cin>>n;
    
    int arr[n];
    vc <int> print;
    for(int i=0;i<n;i++){
        if(prime[i+1]==2){
            print.eb(2);
        }
        else{
            print.eb(1);
        }
    }
    
    if(n>2){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
    for(auto it: print){
        cout<<it<<" ";
    }  
    
    rn;
}