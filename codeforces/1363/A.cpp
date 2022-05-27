// Problem: A. Odd Selection
// Contest: Codeforces - Codeforces Round #646 (Div. 2)
// URL: https://codeforces.com/contest/1363/problem/A
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
#define         sortvec(v) sort(v.begin(),v.end())
#define         sortrev(v) sort(v.rbegin(),v.rend())
#define         py			cout << "Yes\n";
#define         pn			cout << "No\n";
#define         endl        "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST

	int t;
	cin>>t;
	
	while(t--){
		int x,n,even=0,odd=0;
		cin>>x>>n;
		
		int arr[x];
		
		for(int i=0;i<x;i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
		
		if(even>=n){
			if(even==x){
				cout<<"No"<<endl;
			}
			else if(odd>0){
				cout<<"Yes"<<endl;
			}
		}
		else{
			if((x==n && (n-even)%2==0) || (even==0 && n%2==0)){
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}


	}

    rn;
}

