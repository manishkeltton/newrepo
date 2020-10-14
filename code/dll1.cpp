#include<iostream>
using namespace std;
struct Node{
   int d;
   Node *nt,*rv;
 };

Node* root=NULL;
void insert(int d){

   Node* nd = new Node();
   nd->d = d;
   if(root==NULL){
      nd->nt=NULL;
      root=nd;
   }
    else{
      Node* temp = root;
       while(temp->nt!=NULL){
          temp = temp->nt;
       }
           nd->nt = NULL;
          temp->nt = nd;
           nd->rv = temp;
    }
}

void dpl(){
   Node* temp=root;
    while(temp!=NULL){
      cout<<temp->d<<" ";
      temp = temp->nt;
   }
}

int main(){

   for(int i=1;i<=5;i++)
     insert(i);

   dpl();

}
























