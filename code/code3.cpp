#include<bits/stdc++.h>
using namespace std;

int main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int T;
     cin>>T;
       while(T--){
        int N, i,j,s=0,t,w=0,p;
         cin>>N;
            
        vector<long long int> v1;
         v1.resize(N);


          for(i=0; i<v1.size();i++)
             cin>>v1[i];

         for(i=0; i<v1.size();i++)
              s=s+v1[i];

         float v=(float)s/N;
         

          for(j=0;j<v1.size();j++){
                   t=0;
            for(i=0; i<v1.size(); i++){
                  p=v1[j];
                 v1[j]=0;
                 t=t+v1[i];
                  v1[j]=p;
     
              }
                int k=N-1;
              float u=(float)t/k;
               cout<<u<<endl;
              if(u==v){
                  cout<<j+1<<endl;
                   w=0;
                   break;
              }
             else{
                  w=1;
             }
            }

             if(w==1)
               cout<<"Impossible"<<endl;

       }
return 0;
    
}
























