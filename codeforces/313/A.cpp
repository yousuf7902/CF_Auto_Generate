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
        
        int n,f=0,s;
        cin>>n;
        s=n;
        
        if(n<0){
            n=n*(-1);
            f=1;
        }
        
        
        
        vc<int>vec;
        while(n>0){
            int last=n%10;
            vec.eb(last);
            n=n/10;
        }
        
        reverse(vec.begin(),vec.end());
        
        int num1=0,num2=0;
        
        for(int i=0;i<vec.size();i++){
            if(i!=(vec.size()-1)){
                num1=(num1*10)+vec[i];
            }
            
            if(i!=(vec.size()-2)){
                num2=(num2*10)+vec[i];
            }
        }
        
        if(f==1){
            num1=num1*(-1);
            num2=num2*(-1);
        }
        
        //cout<<s<<endl<<num1<<endl<<num2<<endl;
        
        if(s>num1 && s>num2){
            cout<<s<<endl;
        }
        else if(num1>s && num1>num2){
            cout<<num1<<endl;
        }
        else{
            cout<<num2<<endl;
        }
        rn;
    }

