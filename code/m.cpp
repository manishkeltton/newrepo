#include <bits/stdc++.h>
using namespace std;

int main() {

   int T;
     cin>>T;
     while(T--){
         int N,i,j,x;
          cin>>N;
          int ar[N],ar1[N];
          for(i=0;i<N;i++)
           cin>>ar[i];
               i=0;
           for(j=0;j<N;j++){
             ar1[j]=ar[i];
            i++;
           }
           sort(ar,ar+N);
           int a=ar[0];
           int b=ar[N-1];
           for(j=0;j<N;j++)
             {
                 if(ar1[j]==ar[0] || ar1[j]==ar[N-1] )
                 {
                     x=ar1[j];
                     //cout<<ar1[j]<<endl;
                     break;
                 }
             }
             if(x==ar[0])
                cout<<ar[0]<<" "<<ar[N-1]<<endl;
            else
                cout<<ar[N-1]<<" "<<ar[0]<<endl;
         
     }
	return 0;
}
