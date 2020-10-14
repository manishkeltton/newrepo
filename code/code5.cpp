#include<bits/stdc++.h>
using namespace std;

int main(){
   
       

      int T,i;
        cin>>T;
       
       while(T--){
         int Q;
         cin>>Q;
       
        vector<int> v1{0};
        for(i=0; i<v1.size() ; i++){cout<<v1[i]<<" ";}
        while(Q--){
             
              
            int z=v1.size();

        int u,p=0,t=0,n1,b,w=0;    
           scanf("%d", &u);
          
         
          
          for(i=0; i<z; i++){
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);         
         if(v1[i]!=u){
             b = v1[i] ^ u;
             v1.push_back(b);
        }
       }  

       for(i=0; i<v1.size(); i++){
        int cnt = count(v1.begin(), v1.end(), v1[i]);
         
             if(cnt>1){
                Q=Q-cnt+1;
                 w=1;
             
             }
      }
       set<int> s( v1.begin(), v1.end() );
       v1.assign( s.begin(), s.end() );
  
        if(w==0){
       for(i=0; i<v1.size(); i++)
        printf("%d ", v1[i]);

       for(i=1; i<v1.size() ; i++){

           bitset<4> set1(v1[i]);
        cout<<set1<<" ";

          n1 = set1.count();

           if(n1%2==0)
                p++;
           else
                t++;
       }

             cout<<p<<" "<<t<<endl;
      }
 
     }
   }
return 0;
  }
