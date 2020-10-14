#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
      cin>>T;
     while(T--){
        
        int N,K,i,j,p;
         cin>>N>>K;

          int a=100000007;

         int ar[N];
        for(i=0;i<N;i++)
          cin>>ar[i];

        sort(ar,ar+N);
         int v=0,t;
      for(i=1;i<K;i++){
         for(j=0;j<N-i;j++){
                u=0;
            for(p=j+1;p<N;p++){
                 t=j;  
             if(ar[t]!=ar[p]){
                   u++;     
                if(u==i){
                    v++;
                    u--;                 
                }
                 else 
                  { ar[j]=ar[p]; 
                    a=p;} 
               }
                if(ar[p]==ar[N-1]){
                    t=a-1;
                    p=a;
                    u=0;
                }
           }
         }

      }       

     }

}














