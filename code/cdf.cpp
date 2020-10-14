#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
      cin>>T;
      while(T--){
        int N,Q;
        string S;
         cin>>N>>Q;
         cin>>S;
         
         int n=S.length();
         char car[n+1];

         strcpy(car, S.c_str());
        
          while(Q--){
             int L,R;
              cin>>L>>R;

              string str[R];
             for(int j=0;j<R;j++) 
                     str[j]=" ";
             
            for(int j=0;j<R;j++){
               for(int i=0 ; i<L; i++){
                  str[j] = str[j]+car[i];    
              }
             }
               for(int j=0; j<R ; j++){
                    int p = str[j].length();
                     char car2[p+1];
                    strcpy(car2,str[j].c_str());
                  
                     for(int i=0 ; i<p;i++){
                          for(int k=1; k<p;k++){
                                count++;
                          }
                     }

                }

        }
      }
 }
