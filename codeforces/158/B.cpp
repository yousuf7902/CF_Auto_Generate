// Problem: B. Taxi
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/contest/158/problem/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms

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
    
    int arr[5]={0};
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++;
    }
    
    int texi=arr[4]+arr[3]+(arr[2]/2);
    
    arr[1]-=arr[3];
    
    if(arr[2]%2==1){
        texi+=1;
        arr[1]-=2;
    }
    
    if(arr[1]>0){
        if(arr[1]%4==0){
            texi+=arr[1]/4;
        }
        else{
            texi+=(arr[1]/4)+1;
        }
    }
    
    cout<<texi<<endl;
    
    rn;
}