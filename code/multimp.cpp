#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
     cin>>T;
      while(T--){

         int A1,A2,A3,C1,C2,C3;
            cin>>A1>>A2>>A3>>C1>>C2>>C3;

          multimap<int,int> mp1;

          mp1.insert(pair<int,int>(A1,C1));
          mp1.insert(pair<int,int>(A2,C2));
          mp1.insert(pair<int,int>(A3,C3));

          multimap<int,int>::iterator itr;

          for(itr=mp1.begin();itr!=mp1.end();++itr)
              cout<<itr->first<<" "<<itr->second<<endl;
      }

}
