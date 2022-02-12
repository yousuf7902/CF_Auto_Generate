#include <bits/stdc++.h>
using namespace std;

int main()
{
     int m, n,len=2,wid=1,slice;
     cin >> m >> n;

     if(m%2==0){
          slice = (m / len) * (n / wid);
          cout << slice;
     }
     else{
          m = m - 1;
          slice = (m / len) * (n / wid)+(n/len);
          cout << slice;
     }
}