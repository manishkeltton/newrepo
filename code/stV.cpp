#include<bits/stdc++.h>
using namespace std;

int ar[1<<20];
int main(){

   int T;
   cin>>T;
     while(T--){
        int N,i,j;
        cin>>N;
       // int ar[N];
       set<int, greater <int>>st;
       set <int, greater <int> > :: iterator it; 
     for(i=0;i<N;i++)
       cin>>ar[i];
      
      for(i=0;i<N;i++){
          int count=0;
        for(j=0;j<i;j++){
           if(ar[j]%ar[i]==0)
           {
              count++;
            }
           st.insert(count);
        }
      }

          it=st.begin();

      cout<<*it<<endl;

       N=0;
     }
 return 0;
}
