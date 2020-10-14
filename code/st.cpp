#include<bits/stdc++.h>
using namespace std;
int main(){

   int N;
     cin>>N;
   int ar[N];

    for(int i=0;i<N;i++)
       cin>>ar[i];

    int c=1;
    int d=6;
    sort(ar+c,ar+d);
 
   for(int i=0;i<N;i++)
     cout<<ar[i]<<" ";
}
