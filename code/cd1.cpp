#include<iostream>
using namespace std;
int main(){
   int T;
     cin>>T;
    while(T--){
       int N;
        cin>>N;
        int i,ar[N];
      for(i=0;i<N;i++)
        cin>>N;

      sort(ar,ar+N);
      int a=N/4;
      int p=-1;
       if(ar[N/4-1]<ar[N/4] && ar[N/4+1]>=ar[N/4] && ar[(2*N)/4-1]<ar[(2*N)/4] && ar[(2*N)/4+1]>=ar[(2*N)/4] && ar[(3*N)/4-1]<ar[(3*N)/4] && ar[(3*N)/4+1]>=ar[(3*N)/4])
           cout<<ar[N/4]<<" "<<ar[(N*2)/4]<<" "<<ar[(N*3)/4]<<endl;             
          else
              cout<<p<<endl;
    }
   return 0;
}
