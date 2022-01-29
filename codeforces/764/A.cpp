#include <bits/stdc++.h>
using namespace std;

int main()
{
     string n, m, z;
     int a, b, c,count=0;
     cin >> n >> m >> z;

     a = stoi(n);
     b = stoi(m);
     c = stoi(z);

     for (int i = 1; i <= c;i++){
          for (int j = 1; j <= c;j++){
               if(a*i<=c && b*j<=c){
                    if(a*i==b*j){
                         count++;
                    }
               }
          }
     }
     cout << count;
}