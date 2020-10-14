#include <iostream>
using namespace std;

int main() {
	int T;
	 cin>>T;
	  while(T--){
	      int a,N,K;
	      cin>>N>>K;
	      while(K--){
	          a=N%10;
	          if(a!=9){
	              N=N+1;
	          }
	          else{
	              N=N-9;
	          }
	      }
	      cout<<N<<endl;
	  }
	return 0;
}

