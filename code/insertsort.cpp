#include<iostream>
using namespace std;
void insert_sort(int arr[],int n){
   int i,j,key;
   for(j=1;j<n;j++){
       key = arr[j];
       i=j-1;
      while(i>=0 && arr[i]>key){
        arr[i+1] = arr[i];
          i = i-1;
         arr[i+1] = key;
      }
   }

   for(i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main(){
   int i,n;
   cin>>n;
   int ar[n];

  for(i=0;i<n;i++)
   cin>>ar[i];

  insert_sort(ar,n);

  for(i=0;i<n;i++)
     cout<<ar[i]<<" ";
}
