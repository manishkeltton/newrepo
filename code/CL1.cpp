#include<iostream>
using namespace std;
struct Node{
   int d;
   Node* link;
};
Node* root=NULL;

struct Node* list=NULL;
void insert(int d){
   Node* nd = new Node();
   Node* temp;
   nd->d=d;

   if(root==NULL){
     root=nd;
     root->link=root;
   }
    else{
     temp = root;
    while(temp->link!=root){
        temp = temp->link;
      } 
       temp->link = nd;
        temp->link->link=root;
    }   

 

}
void dpl(){

   Node* tp=root;
   do{
      cout<<tp->d<<" ";
      tp=tp->link;
   }while(tp!=root);
    // cout<<tp->d<<endl;
 }
int main(){

   for(int i=1;i<=5;i++)
     insert(i);

   dpl();

}




















