    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int mat[5][5],count=0,pos;

        for (int i = 0; i < 5;i++){
            for (int j = 0; j < 5;j++){
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < 5;i++){
            for (int j = 0; j < 5;j++){
                if(mat[i][j]==1){
                    if(i==2 || j==2){
                        if(i+j==2 || i+j==6){
                            count = 2;
                        }
                        else if(i+j==3 || i+j==5){
                            count = 1;
                        }
                    }
                else if(j==4|| j==0){
                        if(i==1|| i==3){
                            count = 3;
                        }
                        else{
                            count = 4;
                        }
                        
                    }
                else if(j==1 || j==3){
                        if(i==1|| i==3){
                            count = 2;
                        }
                        else{
                            count = 3;
                        }
                        
                    }
                }
            }
        }
        cout << count;
    }