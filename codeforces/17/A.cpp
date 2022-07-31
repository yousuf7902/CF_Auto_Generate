// Problem: A. Noldbach problem
// Contest: Codeforces - Codeforces Beta Round #17
// URL: https://codeforces.com/problemset/problem/17/A
// Memory Limit: 64 MB
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

const int space=2000;

int arr[space];

void sieve(){
    arr[0]=1;
    arr[1]=1;
    
    for(int i=2;i*i<=space;i++){
        if(arr[i]==0){
            for(int j=i*i;j<space;j+=i){
                arr[j]=1;
            }
        }
    }
}


int main(){
    FAST
    
    sieve();
    
    vc <int> vec;
    
    for(int i=0;i<space;i++){
        if(arr[i]==0){
           vec.eb(i);
        }
    }
    
    int n,k;
    cin>>n>>k;
    
    int cnt=0;
    for(int i=0;i<vec.size()-1;i++){
        int x=vec[i]+vec[i+1]+1;
        
        if(x>=2 && x<=n && arr[x]==0){
            cnt++;
        }
    }
    
    if(cnt>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    rn;
}