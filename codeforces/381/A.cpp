#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c, flag = 0, s = 0, d = 0;
    cin >> c;

    vector<int> vec (c);
    for (int i = 0; i < c;i++)
        cin >> vec[i];

    while(!vec.empty()){
        if(flag==0){
            if(*vec.begin()>vec.back()){
                s += *vec.begin();
                vec.erase(vec.begin());
            }
            else{
                s += vec.back();
                vec.pop_back();
            }
            flag =1;
        }
        else{
            if(*vec.begin()>vec.back()){
                d += *vec.begin();
                vec.erase(vec.begin());
            }
            else{
                d += vec.back();
                vec.pop_back();
            }
            flag = 0;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}