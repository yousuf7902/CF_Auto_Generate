// Problem: A. Subrectangle Guess
// Contest: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL: https://codeforces.com/contest/1695/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 

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
        int n,m,maxNum=INT_MIN,mx_row, mx_col;
        cin>>n>>m;
        
        int arr[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
                
                if(maxNum<=arr[i][j]){
                    maxNum=arr[i][j];
                    mx_row=i;
                    mx_col=j;
                }
            }
        }
        
        
        int row=0, col=0;
        row=max(mx_row, (n-mx_row)+1);
        col=max(mx_col,(m-mx_col)+1);
        
        cout<<row*col<<endl;
       
    }
    rn;
}