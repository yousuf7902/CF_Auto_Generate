#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, k,count=0;
     cin >> n >> k;
     int a[n];
          for (int i = 0;i<n;i++){
               cin >> a[i];
          }
          for (int i = 0; i < n;i++){
               if(a[k-1]<=a[i]){
                    if(a[i]>0){
                         count++;
                    }
               }
          }
     cout << count;
}