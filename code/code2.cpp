#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){


   int N,i;
    cin>>N;
    vector<int> v1;

    v1.resize(N);

     for(i=0; i<N;i++)
       cin>>v1[i];

     for(i=0;i<N;i++)
       cout<<v1[i]<<" ";

    
sort(v1.begin(), v1.end());
    
     for(i=0;i<N;i++)
       cout<<v1[i]<<" ";


}
