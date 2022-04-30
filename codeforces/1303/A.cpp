    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin >> t;
     
        while (t--)
        {
            string s;
            cin >> s;
            int first=0, last=0,ans=0;
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]=='1'){
                    first = i;
                    break;
                }
            }

            for (int j = s.size() - 1; j > 0;j--){
                if(s[j]=='1'){
                    last=j;
                    break;
                }
            }

            for (int i = first + 1; i < last;i++){
                if(s[i]=='0')ans++;
            }
                cout << ans << endl;
        }
        return 0;
    }