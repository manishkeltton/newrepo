#include<iostream>
using namespace std;
#define MS 101
int top=-1;
int A[MS];
void push(int x){
   if(top==MS-1)
     cout<<"OF"<<endl;
   else
      A[++top] = x;

}

void pop(){
   if(top==-1){
     cout<<" NO"<<endl;
   return; }
   top--;
}

// int top()
void print(){
  int i;
   cout<<"Stack"<<endl;

    for(int i=0;i<=top;i++)
         cout<<A[i]<<" ";

  } int main(){
      push(2);
     print();
      push(5);
       print();
      push(10);
        print();
      pop();
        print();
      push(12);
           print();
  
}
