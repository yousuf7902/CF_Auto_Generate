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
        
        int n;
        cin>>n;
        
        if(n>=0)cout<<n<<endl;
        else{
            int a,b;
            a=n/10;
            b=(n/100)*10+n%10;
            cout<<max(a,b)<<endl;
        }
        
        rn;
    }

