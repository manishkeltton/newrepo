#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int T;
      cin>>T;
      while(T--){ 

         int N,K,i;
         cin>>N>>K;

      unsigned long long int opsize = pow(2, N); 
         int arr[N];

        for(i=0;i<N;i++)
          cin>>arr[i];
          vector<int>v2;
          v2.push_back(0);
    for (int counter = 1; counter < opsize; counter++) 
    { 

            int cnt=0;
          vector<int>v1;
        if(__builtin_popcount(counter)!=k) continue;   
        for (int j = 0; j < N; j++) 
        { 
              
             if (counter & (1<<j)){
                 cnt++; 
                v1.push_back(arr[j]);
            }   
        } 
        if(cnt==K){
           int s=0;
           for(i=0;i<v1.size();i++){
               s=s+v1[i];
           }
            if(v2[0]==0){
                v2[0]=s;
            }
            else{
               if(s==v2[0]){
                  v2.push_back(s);
               }
                else if(s<v2[0]){
                   v2.clear();
                   v2.push_back(s);
                }
             }          
     
        }
         
    } 
            cout<<v2.size()<<endl;

  }
    return 0; 
} 
