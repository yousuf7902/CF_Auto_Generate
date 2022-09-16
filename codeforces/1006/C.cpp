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
    
    ll int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    ll int s1=0,s2=0,ans=0;
    
    for(int i=0,j=n-1;i<=j;){
        if(s1==s2)
        {
            ans=max(ans,s1);
            s1+=arr[i];
            i++;
        }
        else if(s1<s2){
            s1+=arr[i];
            i++;
        }
        else if(s2<s1){
            s2+=arr[j];
            j--;
        }
        
    }
    if(s1==s2)ans=max(ans,s1);
    cout<<ans<<endl;
    
    rn;
}