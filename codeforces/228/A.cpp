#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int arr[4];
    set<int> st;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
        st.emplace(arr[i]);
    }
 
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size - st.size() << endl;
    return 0;
}