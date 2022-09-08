// Problem: B. Unlucky Ticket
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/B
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
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    vc<int> left, right;
    for(int i=0;i<n;i++)left.eb(s[i]-'0');
    for(int i=n;i<n*2;i++)right.eb(s[i]-'0');
    
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(left[i]<right[i]){
            c1++;
        }
        else if(left[i]>right[i]){
            c2++;
        } 
    }
    
    if(c1==n || c2==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    rn;
}