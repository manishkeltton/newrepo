#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin>>T;
       while(T--){

            int A1,A2,A3,C1,C2,C3;
            cin>>A1>>A2>>A3>>C1>>C2>>C3;

           if(A1>A2 && A2>A3 && C1>C2 && C2>C3)
                   cout<<"FAIR"<<endl;        
          else if(A1<A2 && A2<A3 && C1<C2 && C2<C3)
                   cout<<"FAIR"<<endl;
          else if(A1<A2 && A2>A3 && A1>A3 && C1<C2 && C2>C3 && C1>C3)
                   cout<<"FAIR"<<endl;
          else if(A1<A2 && A2>A3 && A1<A3 && C1<C2 && C2>C3 && C1<C3)
                   cout<<"FAIR"<<endl;
          else if(A1>A2 && A2<A3 && A1<A3 && C1>C2 && C2<C3 && C1<C3)
                   cout<<"FAIR"<<endl;    
          else if(A1>A2 && A2<A3 && A1>A3 && C1>C2 && C2<C3 && C1>C3)
                   cout<<"FAIR"<<endl;  
          else if(A1==A2 && A2<A3 && C1==C2 && C2<C3)
                   cout<<"FAIR"<<endl;   
          else if(A1==A2 && A2>A3 && C1==C2 && C2>C3)
                   cout<<"FAIR"<<endl;   
          else if(A1>A2 && A2==A3 && C1>C2 && C2==C3)
                   cout<<"FAIR"<<endl;   
          else if(A1<A2 && A2==A3 && C1<C2 && C2==C3)
                   cout<<"FAIR"<<endl;   
          else if(A1<A2 && A1==A3 && C1<C2 && C1==C3)
                   cout<<"FAIR"<<endl; 
          else if(A1>A2 && A1==A3 && C1>C2 && C1==C3)
                   cout<<"FAIR"<<endl; 
          else if(A1==A2 && A1==A3 && C1==C2 && C1==C3)
                   cout<<"FAIR"<<endl; 
          else
                   cout<<"NOT FAIR"<<endl;



    }

return 0;

}
