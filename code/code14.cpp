#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int T;
     cin>>T;
     while(T--){
       
       unsigned long long int N;
            
             cin>>N;
             //N=N%60;
             
          if(N>=2 || N<4)
             cout<<"1"<<endl;
          else if(N>=4 || N<8)
             cout<<"2"<<endl;
          else if(N>=8 || N<16 || N>=2048 || N<4196 )
             cout<<"3"<<endl;
          else if(N>=16 || N<32)
             cout<<"0"<<endl;
         else if(N>=32 || N<64)
             cout<<"9"<<endl; 
          else if(N>=64 || N,128)     
                

    }
  return 0;
  
}
