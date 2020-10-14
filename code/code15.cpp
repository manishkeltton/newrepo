#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int T;
     cin>>T;
     while(T--){
       
       unsigned long long int N;
            
             cin>>N;
             N=N%60;
             
        N=N-2;
         int s,u=0,v=1;
            vector<int>v1;
           while(N--){
             s=v+u;

              u=v;
              v=s;
            v1.push_back(s%10);
           }           
 
         for(int i=0;i<v1.size();i++)
            
    }
  return 0;
  
}
