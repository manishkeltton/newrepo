#include<bits/stdc++.h>
using namespace std;

int main(){

   int T;
    cin>>T;

     while(T--){
          unsigned long long int N,count,t,u,s,p,a;

              cin>>N;
              count=0;

              N=N%10;
            int z=1;
            if(N==2 || N==3){
              cout<<z<<endl;
            }else{
             while(N!=1){
            
               count++;  
                 N=N/2;
            //   cout<<N<<" ";
               
             }

        //ios_base::sync_with_stdio(false);
           // cin.tie(NULL); 
           //   cout<<endl;
              p=pow(2,count);
             
            
              p=p-2;

             t=0;
             u=1;
           while(p--){
           
              s=u+t;
               t=u;
               u=s;
          //  cout<<s<<" ";
           }  
      // cout<<endl;
               a=s%10;
             printf("%llu\n", a);
     }
  }
  return 0;
}


















