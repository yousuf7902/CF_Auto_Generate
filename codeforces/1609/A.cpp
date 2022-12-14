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

        ll int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll cnt=1;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                while(arr[i]%2==0){
                    arr[i]/=2;
                    cnt*=2;
                }
            }
        }
        
        //cout<<arr[n-1]<<endl;
        sort(arr,arr+n);
        arr[n-1]=cnt*arr[n-1];
        ll int sum=0;
        cout<<accumulate(arr, arr+n,sum)<<endl;

    }

    rn;
}
