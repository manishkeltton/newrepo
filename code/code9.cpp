#include<bits/stdc++.h>
using namespace std;
int main(){

   int T;
    cin>>T;
     while(T--){
           int N,K,i;
            int s=0;
             cin>>N>>K;

          vector<int> v1;
          vector<int> v2;
              ios_base::sync_with_stdio(false);
            cin.tie(NULL);  
             for(i=0;i<N;i++)
               cin>>v1[i];

            sort(v1.begin(),v1.end());

          for(j=0;j<N;j++){
                   i=1;
            if(j-k<=0){
                k=k-1;
              while(k--){
              s=s+v1[j]+v1[i];
                      i++;
           }

            }
              v2.push_back(s);
          }

             cout<<s<<endl;

     }
}
