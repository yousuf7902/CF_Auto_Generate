// Problem: C. Dominant Piranha
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1433/C
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
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n+1];
        
        map<int,int>mapi;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            mapi[arr[i]]++;
        }
        
        int ans=0,temp=arr[1];
        
        for(int i=2;i<=n;i++){
            if(temp<arr[i]){
                temp=arr[i];
            }          
        }
        
        for(int i=1;i<=n;i++){
            if(arr[i]==temp){ 
                if((arr[i-1]<temp && i!=1)||(arr[i+1]<temp && i!=n)){
                    ans=i;
                    break;
                }
            }
        }
        
        if(mapi[arr[1]]==n){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
    
    rn;
}