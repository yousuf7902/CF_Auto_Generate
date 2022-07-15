    //~"~"~"~"~"~"~"~"~"~"~"~"~  ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥   ~"~"~"~"~"~"~"~"~"~"~"~"~//  
     
    // +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
    // ##                                                                         ## //
    // ##          Yousuf Hassan || CSE,IUBAT || yousufhassan04@gmail.com         ## //
    // ##                                                                         ## //
    // ##                        CF Handle : Yousuf7902                           ## //
    // ##                                                                         ## //
    // +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
     
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
        
        int s,n;
        cin>>s>>n;
        
        vc <pair> vec;
        
        while(n--){
            int a,b;
            cin>>a>>b;
            
            vec.eb(pair(a,b));
        }
        
        sort(vec.begin(),vec.end());
       
       int flag=0;
       for(int i=0;i<vec.size();i++){
               if(s>vec[i].first){
                   s=s+vec[i].second;
                   flag++;
               }
       }
        
        if(flag!=vec.size()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        rn;
    }

