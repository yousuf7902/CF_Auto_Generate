    // Problem: B. Odd Subarrays
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/contest/1686/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
//~"~"~"~"~"~"~"~"~"~"~"~"~"~"~ ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥ ~"~"~"~"~"~"~"~"~"~"~"~"~"~"~//  
 
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
    #define         sort(v) sort(v.begin(),v.end())
    #define         sortrev(v) sort(v.rbegin(),v.rend())
    #define		    py				cout << "Yes\n";
    #define		    pn				cout << "No\n";
    #define 	    endl            "\n"
    #define         rn return 0;
    //
    //===============================================================================

    int main(){
        FAST

    	int t;
    	cin>>t;

    	while(t--){
    		int n,mid,count=0,pos=1;
    		cin>>n;

    		int arr[n+1];

    		for(int i=1;i<=n;i++){
    			cin>>arr[i];
    		}

    		for(int i=1;i<n;i++){
                if(arr[i]>arr[i+1]){
                    count++;
                    i++;
                }
    		}

    		cout<<count<<endl;

    	}

        rn;
    }
