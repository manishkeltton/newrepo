#include<bits/stdc++.h>
using namespace std;

int main(){

   int T;
   cin>>T;
   while(T--){

     int N,K,i,a,b;
      cin>>N>>K;
      deque<long long int>g1;
      g1.resize(N);
    //  int i;
      for(i=0;i<N;i++)
        cin>>g1[i];

      for(i=0;i<K;i++){
          a=g1[i%N];
          b=g1[N-(i%N)-1];
          g1[i%N]=a^b;
        // cout<<g1[i%N]<<" "; 
     }
    for(i=0;i<N;i++)
       cout<<g1[i]<<" ";

     cout<<endl;
   }
  return 0;
}
