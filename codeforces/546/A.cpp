#include <bits/stdc++.h>
using namespace std;

int main()
{
     int k, n, w, money=0,borrow;
     cin >> k >> n >> w;

     for (int i = 1; i <= w;i++){
          money = money+i * k;
          if(n<money){
               borrow = money - n;
          }
          else{
               borrow = 0;
          }
     }
     cout << borrow;
}