#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   long long int T;
    cin>>T;
     while(T--){

       long long int N, i,j,u,l,a=0,b=0;
        cin>>N;
        
        vector<int> v1;
         v1.resize(N);
      
        vector<int> v2;
          v2.resize(N);

       for(i=0;i<N;i++)
         cin>>v1[i];

       for(j=0;j<N;j++)
         cin>>v2[j];

       
        for(j=0;j<N;j++)
         a=a+v2[j];
     

		  for(int i=0;i<N;i++)
		  {
		  	int l=i - v1[i];
		  	int u= i+ v1[i];
		  	if(l<0)
		  	 l=0;
		  	if(u>N-1)
		  	 u=N-1;
		  	 
		  	 b= b + (u-l + 1);
		  	 
		  	 
		  }  
  
       
                if(a==b)
                   cout<<"YES"<<endl;
                else
                   cout<<"NO"<<endl;
           
           }

  return 0;
   
}





















