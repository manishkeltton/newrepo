#include <iostream>
using namespace std; 
bool findPartiion (int arr[], int n) 
{ 
    int sum = 0; 
    int i, j; 
    
    for (i = 0; i < n; i++) 
      sum += arr[i]; 
      
    if (sum%2 != 0)   
       return false; 
    
    bool part[sum/2+1][n+1]; 
      
    for (i = 0; i <= n; i++) 
      part[0][i] = true; 
        
    for (i = 1; i <= sum/2; i++) 
      part[i][0] = false;      
       
     for (i = 1; i <= sum/2; i++)   
     { 
       for (j = 1; j <= n; j++)   
       { 
         part[i][j] = part[i][j-1]; 
         if (i >= arr[j-1]) 
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
       }         
     }     
   
     return part[sum/2][n]; 
}      
  
 
int main() 
{ 
   int T,i;
     cin>>T;
   while(T--){
    
  int ar[] = {1,2,3}; 
  int A,B,C;
   cin>>A>>B>>C;
   int n=A+B+C;
   int arr[n];
         i=0;
     while(A>0){ 
      arr[i]=ar[0];
         i++;
        A--;
      }
      while(B>0){
       arr[i]=ar[1];
         i++;
        B--;
       }
       while(C>0){
         arr[i]=ar[2];
          i++;
          C--;
       }

   // for(i=0;i<n;i++)
     //   cout<<arr[i]<<" ";
    
  if (findPartiion(arr, n) == true) 
     printf("YES\n"); 
  else
     printf("NO\n");

  } 
  getchar(); 
  return 0; 
}























