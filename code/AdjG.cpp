#include<iostream>
using namespace std;
int main(){

    int v=5;
    int i,j;
    int chc;
    int adj[v][v];
      for(i=0;i<v;i++){
        for(j=0;j<v;j++){
          adj[i][j]=0;  
        }
     }

   while(1){
       cin>>i>>j;
       adj[i][j]=1;
       adj[j][i]=1;
     cout<<i<<" "<<j<<endl;
       cin>>chc;
       if(chc==0)
         break;
   }
   cout<<endl;

   for(i=0;i<v;++i){
     for(j=0;j<v;++j){
         cout<<adj[i][j]<<" ";
       }
         cout<<endl;
   }
  return 0;

}
