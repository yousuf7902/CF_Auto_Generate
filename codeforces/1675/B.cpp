#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t; 
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>vec;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            vec.emplace_back(x);
        }
        int count=0,value=0;
            for(int i=n-2;i>=0;i--){
                if(vec[i+1]==0){
                    value=1;
                    break;
                }
                else{
                    while(vec[i]>=vec[i+1]){
                        count++;
                        vec[i]=vec[i]/2;
                    }
                }
            }
            
            if(value==1){
                cout<<-1<<endl;
            }
            else{
                cout<<count<<endl;
            }

        
    }

    return 0;
}