#include<bits/stdc++.h>
using namespace std;

int main(){

     ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int T;
      cin>>T;

      while(T--){
          long long int N,K,i,p,t,s=0,r,v;
             cin>>N>>K;

            int ar[N];

             p=K%N;
             t=K/N;

           for(i=0; i<N; i++)
              ar[i]=t;

            
            if(p){
                  i=1;
               while(p--){

                   if(i<N){
                     ar[i]++;
                      i=i+2;
                   }
                    else{  
                           r=N;
                        while(p--){
                           if(N%2==0){
                                r=r-2;
                              ar[r]++;
                               r=r-2;
                            }
                           else{
                                 r=r-1;
                                ar[r]++;
                                r=r-2;
                            }
                            
                        }

                     }   
                      /*   v=u-1;
                         if(ar[v]<ar[1]){
                             ar[v]++;
                              v=v-2;
                              u=v;
                          }
                           else{
                                 int w=v-1;
                                 ar[w]++;
                                 v=w-2;
                                 u=v;
                            }
                      */
                          
                     }
               }
            }

          for(i=0; i<N; i++){
              cout<<ar[i]<<" ";
          }

          for(i=0; i<N-1; i++){
                if(ar[i]-ar[i+1]>=0)
                   s=s+ar[i]-ar[i+1];
                else
                   s=s+ar[i+1]-ar[i];
           }

              cout<<s<<endl;
       
      }
 return 0;  
}





















