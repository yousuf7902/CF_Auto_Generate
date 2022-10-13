// Problem: B. Funny Permutation
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/B
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
    
        vc <int> arr;
    
        for(int i=0;i<n;i++){
            int x=i+1;
            arr.eb(x);
        }
    
        reverse(arr.begin(),arr.end());
        
        
        if(n==3){
            cout<<-1<<endl;
        }
        else if(n%2==0){
            for(auto it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            int c=1;
            swap(arr[0],arr[1]);
            for(int i=2;i<n;i++){
                arr[i]=c;
                c++;
            }
            
            for(auto it: arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        
    }
    
    
    rn;
}