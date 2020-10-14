#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
    cin>>T;
    while(T--){
     unsigned long long int L,R,p,s=0,a1=1,a2=2,a3=3,a4=4;

        cin>>L>>R;
        int q=R-L+1;
          L--;
          a1=a1+L;
          a2=a2+L;
          a3=a3+L;
          a4=a4+L;
         int x = q/2;
         while(x--){
          ios_base::sync_with_stdio(false);
           cin.tie(NULL); 
          p=a1*a2*a3*a4;
          s=s+p;
            a1++;
            a2++;
            a3++;
            a4++;
           
         }
           x=q-(q/2);
           while(x--){
          ios_base::sync_with_stdio(false);
           cin.tie(NULL); 
          p=a1*a2*a3*a4;
          s=s+p;
            a1++;
            a2++;
            a3++;
            a4++;
           
         }
        cout<<s%1000000007<<endl;
    }
}
