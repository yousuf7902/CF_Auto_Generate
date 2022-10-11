// Problem: A. Compare T-Shirt Sizes
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/A
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
        string a,b;
        cin>>a>>b;
        
        if(a[a.size()-1]==b[b.size()-1]){
            if(a[a.size()-1]=='S'){
                if((a.size()-1)>(b.size()-1)){
                    cout<<'<'<<endl;
                }
                else if((a.size()-1)<(b.size()-1)){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'='<<endl;
                }
            }
            else{
                if((a.size()-1)>(b.size()-1)){
                    cout<<'>'<<endl;
                }
                else if((a.size()-1)<(b.size()-1)){
                    cout<<'<'<<endl;
                }
                else{
                    cout<<'='<<endl;
                }
            }
        }
        else{
            
            if(a[a.size()-1] == 'L' && b[b.size()-1] == 'M'){
                cout<<'>'<<endl;
            }
            else if(a[a.size()-1] == 'L' && b[b.size()-1] == 'S'){
                cout<<'>'<<endl;
            }
            else if(a[a.size()-1] == 'M' && b[b.size()-1] == 'L'){
                cout<<'<'<<endl;
            }
            else if(a[a.size()-1] == 'M' && b[b.size()-1] == 'S'){
                cout<<'>'<<endl;
            }
            else if(a[a.size()-1]=='S' &&  (b[b.size()-1]=='L' || b[b.size()-1]=='M')){
                cout<<'<'<<endl;
            }
            
        }
        
    }
    
    rn;
}