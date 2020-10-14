#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
     cin>>T;
     while(T--){

      int N,i;
       cin>>N;
       int ar[N];
    for(i=0;i<N;i++)
       cin>>ar[i];

     int a,b,c,d,u,count=1;
      a=(N-1)/6;
      b=(N-1)%6;
      c=1;
      d=6;
      u=6;
      
     while(a--){
      //  sort(a+c,a+d);
        int p=ar[c];  
        for(i=c+1;i<d;i++){
            if(p>=ar[i])
               p=ar[i];
        }

         if(p>=ar[u])
           count++;

           c=c+u;
           d=d+u;
           u=u+6;
      }

     if(b!=0){
        
           d=d-6+b;
           u=u-6+b;
              int p=ar[c];       
          // sort(ar+c,ar+d);
                for(i=c+1;i<d;i++){
                 if(p>=ar[i])
                   p=ar[i];
               }
            if(p>=ar[u])
              count++;
          } 
       }
         cout<<count<<endl;
     }
  // return 0;
}










