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
     if(N<6){
       int p=ar[N-1];
       int x=0;
        sort(ar,ar+N-1);
       /*for(i=0;i<N;i++)
       {
         if(p>=ar[i])
         {
           x=0;
           break;
         }
         else{
          x=1;
         }
       }*/
      if(ar[0]>ar[N-1]){
       count++;
      }
    }
    else{
       int Q=N-5;
       int a=0;
       int b=5;
       while(Q--){
         
         int p=ar[b];
         int x=0;
         for(i=a;i<a+5;i++){
            if(p>ar[i]){
                x=0;
                break;
             }
            else{
             x=1;
            }
        }
         a++;
         b++;
        if(x==1)
         count++;
       }
    }
      cout<<count<<endl;              
   }
  return 0;
}





