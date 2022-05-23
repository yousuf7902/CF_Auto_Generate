#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    string s;
    cin>>s;

    sort(s.begin(),s.end());
    vector <char> vec;
    for(int i=0, j=n-1;i<=j;i++,j--){
        if(s[i]==s[j]){
            (i==j)? (vec.emplace_back(s[i])):(vec.emplace_back(s[i]), vec.emplace_back(s[j]));
        }
    }

    cout<<vec.size()<<endl;

    return 0;
}
