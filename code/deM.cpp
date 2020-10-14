#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
     cin>>T;
      while(T--){
   int N,M,Q,i,j,s1,s2;
    cin>>N>>M>>Q;
    deque<unsigned long long int>g;
        

     g.resize(N*M);
      for(i=0;i<N;i++)
        memset(g[i],0,g.size()*M);

     while(Q--){
      int a,b;
       cin>>a>>b;

    // for(j=0;j<M;j++){
         s1=((a-1)*M);
         //g[s1]=g[s1]+1;
          int v=0;
          memset(g[s1],0,g.size()*M);
            v++;
    // }
   
      for(i=0;i<N;i++){
         s2=(i*M)+b-1;
          g[s2]=g[s2]+1;
       }
     }
   unsigned long long int count=0;
    while(!g.empty()){
         int a=g.front();
         g.pop_front();
          if(a%2!=0)
            count++;
     }

      cout<<count<<endl;
  }
  return 0;
}
