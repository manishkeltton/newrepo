#include<bits/stdc++.h>
using namespace std;
int main(){

   int T;
    cin>>T;
    while(T--){
      int N,P,i,a=0;
      cin>>N>>P;
       int ar[N];
       for(i=0;i<N;i++)
        cin>>ar[i];

       sort(ar,ar+N);
   
       for(i=0;i<N;i++){
           
           if(P>=ar[i]){
             P=P-ar[i];
            a++;
           }else{ 
            break;}

         
        }  
         cout<<a<<endl;    

     }

}
