#include<bits/stdc++.h>
using namespace std;
int main(){

  int T;
   cin>>T;
   while(T--){
    int i,N;
     cin>>N;
     int ar[N];
    for(i=0;i<N;i++)
       cin>>ar[i];

      int count=1;
     for(i=0;i<N;i++){
         int p=ar[i];
          int q=i;
           int x=0;
          int t=0;
        while(q>0){
           q--;
          if(ar[q]>p){
             x=1;
           }
          else{
             x=0;
             break;
          }
              t++;
          if(t==5){
         //  cout<<"y"; 
            break;
          }
            
        }

         if(x==1){
    //  cout<<"y";
           count++;
     }
 }
     cout<<count<<endl;
  }
  return 0;
}






