// Problem: C. Where's the Bishop?
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
    int t;
    cin>>t;
    
    while(t--){
        int size_arr=8;
        char arr[size_arr][size_arr];

        for(int i=0;i<size_arr;i++){
            for(int j=0;j<size_arr;j++){
                    cin>>arr[i][j];
                }
            }
        
        int cnt,mark=0,i,j,a,b;
        for(i=0;i<size_arr;i++){
            cnt=0;
            for(j=0;j<size_arr;j++){
                if(arr[i][j]=='#'){
                    cnt++;
                    a=i;
                    b=j;
                }
            }
            if(cnt==2){
                mark=1;
            }
            
            if(mark==1 && cnt==1){
                cout<<a+1<<" "<<b+1<<endl;
                break;
            }
        }
        
        
    }
    rn;
}