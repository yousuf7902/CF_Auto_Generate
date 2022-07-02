// Problem: A. Tom Riddle's Diary
// Contest: Codeforces - Manthan, Codefest 17
// URL: https://codeforces.com/problemset/problem/855/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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

int check[110];

int main(){
    FAST
    
    int n;
    cin>>n;
    
    string names[n];
    
    for(int i=0;i<n;i++){
        cin>>names[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(names[i]==names[j]){
                check[j]=1;
            }       
        }
    }
    
    for(int i=0;i<n;i++){
        if(check[i]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    rn;
}