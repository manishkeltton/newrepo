#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
     cin>>T;
    while(T--){

     int ar[]={4,2,5,5,4,5,6,3,7,6};
     int A,B,p,s=0;
      cin>>A>>B;
      p=A+B;

      while(p){
        int t=p%10;
          p=p/10;
          s=s+ar[t];
      }

       cout<<s<<endl;

 
    }   
 return 0;

}
