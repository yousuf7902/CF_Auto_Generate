#include <bits/stdc++.h>

using namespace std;

int main()
{
   int num[50],new_arr[1000],count=0, arr[50];
   int n;
   cin>>n;
   
   memset(new_arr, 0, sizeof(new_arr));
   
   for(int i=0;i<n;i++){
       cin>>num[i];
   }
   
   for(int i=n-1;i>=0;i--){
       if(new_arr[num[i]]!=num[i]){
           new_arr[num[i]]=num[i];
           arr[count]=num[i];
           count++;
       }
   }
   
  cout<<count<<endl;
  for(int i=count-1;i>=0;i--){
      cout<<arr[i]<<" ";
  }
   

}