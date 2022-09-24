// Problem: A. Select Three Sticks
// Contest: Codeforces - Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/contest/1734/problem/A
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
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n],f=0;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];  
        }
        
        vc<int>vec;
        map<int,int>mapi;
        for(int i=0;i<n;i++){
            vec.clear();
            for(int j=0;j<n;j++){
                if(i==j)continue;
                vec.eb(abs(arr[i]-arr[j]));
            }
            sort(vec.begin(), vec.end());
            mapi[arr[i]]=vec[0]+vec[1];
        }
        
        int ans=INT_MAX;
        for(auto it:mapi){
            ans=min(ans,it.second);
        }
        
        cout<<ans<<endl;


    }
    
    rn;
}