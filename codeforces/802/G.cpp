#include<bits/stdc++.h>
using namespace std;
int main(){
	    string s;
	   cin >> s;
	   string check = "heidi";

	   for(int i=0, j=0 ;i<s.size();i++){
	   		if(s[i]==check[j]){
	   			j++;
	   			if(j==5){
	   				cout<<"YES\n";
	   				return 0;
	   			}
	   		}
	   }
         cout<<"NO\n";
       
}