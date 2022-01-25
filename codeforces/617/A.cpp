#include <bits/stdc++.h>
using namespace std;

int main()
{
     int num,sum=0,count=0,i;
     cin >> num;
     count = num / 5;
     if (num % 5 != 0)
     {
          count++;
     }
     cout << count;

}