#include <bits/stdc++.h>
using namespace std;

int main()
{
     int x = 0,n;
     cin >> n;
     while(n--){
          string statement;
          cin >> statement;
          if(statement=="++X"){
               ++x;
          }
          else if(statement=="X++"){
               x++;
          }
          else if(statement == "--X"){
               --x;
          }
          else{
               x--;
          }
     }
     cout << x;
}