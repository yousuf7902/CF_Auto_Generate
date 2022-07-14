#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	
	int n,ans=0;
	cin>>n;
	map <char, int> cnt;
	string s;
	cin>>s;
	
	for(int i=0;i<(n*2)-2;i+=2){
	    if(s[i]==s[i+1]+32)continue;
	    cnt[s[i+1]+32]>0 ? cnt[s[i+1]+32]--: ans++,cnt[s[i]]++;
	}

	cout<<ans<<endl;
	
}