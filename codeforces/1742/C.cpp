// Problem: C. Stripes
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/C
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
        char arr[8][8];
        
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        
        int b=0,r=0;
        for(int i=0;i<8;i++){
            b=0;
            r=0;
            for(int j=0;j<8;j++){
                if(arr[j][i]=='B')b++;
                if(arr[i][j]=='R')r++;
            }
            if(b==8){
                cout<<"B"<<endl;
                break;
            }
            if(r==8){
                cout<<"R"<<endl;
                break;
            }
        }
        
    }
    
    rn;
}