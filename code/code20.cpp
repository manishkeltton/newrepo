#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&A, int k){

    const int N=A.size();

    if(N<k || N<1 || k<1)
       return 0;
    if(N==k)
       return 1;

   vector<int>v1(N,0);
   vector<int>v2(N,0);
   vector<int>v3(N,0);

     v2[N-1]=1;
     v3[A[N-1]-1]=1;

    for(int i=N-2;i>=0;i--){
        v2[i]=v2[i+1];
        if(v3[A[i]-1]==0){
          v2[i]++;
          v3[A[i]-1]=1;
        } 
       
    }    

     for(int j=1;j<k;j++){
         
        fill(v3.begin(),v3.end(),0);

     }

}
