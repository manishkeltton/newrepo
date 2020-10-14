#include<iostream>
#include<algorithm>

using namespace std;

void sort(int a[], int n){
  
     int i,j,temp;
    for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
         if(a[i]>a[j])
           {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
           }
     }
    }
}

void GenSubset(int a[],int reqlen, int start, int currlen, bool check[], int len){
     cout<<"A";
     if(currlen>reqlen)
        return;
     else if(currlen==reqlen){
         cout<<"\t";
      for(int i=0;i<len;i++){
         if(check[i]==true){
           cout<<a[i]<<" ";
         }
      }

         cout<<"}\n";
         return;
     }

    if(start==len){
       return;
    }

    check[start]=true;
   GenSubset(a,reqlen,start+1,currlen+1,check,len);
     check[start]=false;
   GenSubset(a,reqlen,start+1,currlen,check,len);
}

int main(){
  
    int i,n;
    bool check[n];
     cin>>n;
      int arr[n];

        for(i=0;i<n;i++)
          {
            cin>>arr[i];
            check[i]=false;
          }
       sort(arr,n);

         cout<<"{ }\n";
          cout<<"A";

  for(i=1;i<=n;i++){
       GenSubset(arr,i,0,0,check,n);
    }
        
   
   return 0;
}






















