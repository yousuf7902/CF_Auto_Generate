// Problem: A. Dreamoon and Stairs
// Contest: Codeforces - Codeforces Round #272 (Div. 2)
// URL: https://codeforces.com/problemset/problem/476/A
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
    
    int n,m;
    cin>>n>>m;
    
    st check;
       
    int c=1;
    int t=n;
    
    if(n%2==0)check.insert((n/2));
    else check.insert((n/2)+1);
    
    while(1){
        t-=c;
            
        if(t<0)break;
            
        if(t%2==0){
            int a=(t/2)+c;
            check.insert(a);
        }
        else{
            int a=(t/2)+c;
            check.insert(a+1);
        }
            
        t=n;
        c++;
    }
    
    int f=0;
    for(auto it:check){
        if(it%m==0){
            cout<<it<<endl;
            f=1;
            break;
        }
    }
    
    if(f==0)cout<<-1<<endl;
    
    rn;
}