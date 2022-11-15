#include <bits/stdc++.h>
using namespace std;


//===============================================================================
//

typedef bool                              boo;
typedef long long int                     ll;
typedef unsigned long long int            l1;
typedef double                            db;
typedef vector<ll>                        vc;
typedef set<ll>                           st;
typedef pair<ll, ll>                      pr;
typedef map<ll, ll>                       mpll;
typedef map<ll,char>                      mpchar;
typedef vector<pair<ll,ll>>               pr_vc;


//===============================================================================
//

#define                        FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define test                   int t;cin>>t;while(t--)
#define eb                     emplace_back
#define prec(n)                fixed<<setprecision(n)
#define py                     cout << "Yes\n";
#define pn                     cout << "No\n";
#define pY                     cout << "YES\n";
#define pN                     cout << "NO\n";
#define endl                   "\n"
#define F                      first
#define S                      second
#define gcd(a,b)               __gcd(a,b);
#define rn                     return 0;

//
//===============================================================================



void solve(){
        int n;
        cin>>n;

        vc a, b;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            a.eb(x);
        }

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            b.eb(a[i]-x);
        }

        sort(b.begin(), b.end());

        ll ans=0;

        for(int i=0;i<n;i++){
            if(b[i]>0){
                int pos=lower_bound(b.begin(), b.end(), -b[i]+1)-b.begin();
                ans+=(i-pos);
            }

        }

        cout<<ans<<endl;
}


int main(){

        FAST

        //test

        solve();

        rn;
}
