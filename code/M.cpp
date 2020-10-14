#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
    cin>>t;
    while(t--){
       int N,M,Q;
       cin>>N>>M>>Q;

       int ar[N][M];
       int i,j;
       
       //  vector<vector<int>> ar(N, vector<int>(M, 0));
       //memset(ar, 0, sizeof(ar[0][0]) * N * M);

        for(int i=0;i<N;i++)
         memset(ar[i],0,sizeof(ar)*M);
 
        for(i=1;i<=N;i++){
          for(j=1;j<=M;j++){
           cout<<ar[i][j]<<" ";
          }
              cout<<endl;
       }

        while(Q--){
           int a,b;
          cin>>a>>b;

           for(j=1;j<=M;j++){
               ar[a][j]=ar[a][j]+1;
            }

         for(i=1;i<=N;i++){
               ar[i][b]=ar[i][b]+1;

              
            }
          //  cout<<a<<b;
        }
           int count=0;
         for(i=1;i<=N;i++){
          for(j=1;j<=M;j++){
              if(ar[i][j]%2!=0)
                 count++;
          }
       }
        cout<<count<<endl;
    }
  return 0;
}
















