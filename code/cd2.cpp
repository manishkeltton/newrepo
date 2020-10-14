#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	  cin>>T;
	  while(T--){
	      
	      int N;
	      cin>>N;
	      
	      long long int b=1;
	      int a;
	      long long int t=2;
	      while(N--){
	          long long int v = pow(t,N);
               cout<<v<<" ";
	          b=b*v;
                  b=b%1000000007;
	          t++;
	          
	      }
	      cout<<b%1000000007<<endl;
	      
	  }
	return 0;
}

