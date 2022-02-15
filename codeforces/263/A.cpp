    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int mat[5][5],row, col,count;

        for (int i = 0; i < 5;i++){
            for (int j = 0; j < 5;j++){
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < 5;i++){
            for (int j = 0; j < 5;j++){
                if(mat[i][j]==1){
                    row = i;
                    col = j;
                }
            }
        }
        if(row>2){
            row = row - 2;
        }
        else{
            row = 2 - row;
        }
        if(col>2){
            col = col - 2;
        }
        else{
            col = 2 - col;
        }
        cout << row + col;
    }