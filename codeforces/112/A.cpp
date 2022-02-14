    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int count = 0;
        string n1,n2;
        cin >> n1>>n2;
        for (int i = 0; i < n1.size();i++){
            if(tolower(n1[i])<tolower(n2[i])){
                count = -1;
                cout << count << endl;
                return 0;
            }
            else if(tolower(n1[i])>tolower(n2[i])){
                count = 1;
                cout << count << endl;
                return 0;
            }
        }
        cout << count;
        return 0;
    }