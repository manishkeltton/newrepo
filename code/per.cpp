#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int T;
     cin>>T;
     while(T--){
         int i,N,M;
         cin>>M>>N;
         unsigned long long  b=1;
         for(i=2;i<=M;i++){
            b=b*i;
           // b=b%1000000007;
         }
            cout<<b%1000000007<<endl;
         
     }
    
}
