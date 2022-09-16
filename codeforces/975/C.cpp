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
    
    ll int s[n+1],k[m+1],pre[n+1];
    
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=1;i<=m;i++)cin>>k[i];
    
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i] = pre[i-1] + s[i];
    }
    
    ll int sum=0,warr=0;
    for(int i=1;i<=m;i++){
        sum+=k[i];
        
        warr=upper_bound(pre+1,pre+n+1,sum)-pre;
        warr--;
        
        if(warr==n){
            cout<<n<<endl;
            sum=0;
        }
        else{
            cout<<n-warr<<endl;
        }
    }
    
    rn;
}