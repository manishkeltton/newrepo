#include<bits/stdc++.h>
using namespace std;

int main(){

   int T;
    cin>>T;

     while(T--){
          unsigned long long int N,count,t,u,s,p,a;

              cin>>N;
              count=0;
            int z=1;
            if(N==2 || N==3){
              cout<<z<<endl;
            }else{
             while(N!=1){
            
               count++; 
                 N=N/2;
            //   cout<<N<<" ";
               
             }
           //   cout<<endl;
              p=pow(2,count);
           }
    }
  return 0;
}
