#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *link;
};

struct Node* insert(Node *root, int data){

  Node* node=new Node();
     node->data= data;
     node->link=root;
    root = node;
   //cout<<root->data;
    

  return root;
}

void depl(Node* root){

   Node *ptr=root;
   
 
   while(ptr!=NULL){
     cout<<ptr->data<<" ";
     ptr=ptr->link;
   }
}

void DlF(Node* root){
   Node* ptr=root;
   if(ptr->link==NULL)
     return;
   else{
   ptr=ptr->link;
    root=ptr;

  }
   while(ptr!=NULL){
    cout<<ptr->data<<" ";
   ptr=ptr->link;
   }

}
void DlE(Node* root){
  Node* ptr=root;
   if(ptr->link==NULL)
      return ;
    else{
        while(ptr->link!=NULL)
         ptr=ptr->link;
      }
    free(ptr);
    while(root->link!=NULL){
      cout<<root->data<<" ";
        root=root->link;
   }
 
}
void DlM(Node* root,int Q){
    Node* ptr=root;

    while(ptr!=NULL)
    {
       if(ptr->data==Q)
         ptr->link=ptr->link->link;

        ptr=ptr->link;
    }
    while(root->link!=NULL){
      cout<<root->data<<" ";
        root=root->link;
   }
    
}
int main(){
  Node* root=NULL;
     root=insert(root,1);
     root=insert(root,2);
     root = insert(root,3);
     root = insert(root,4);
     root = insert(root,5);
     depl(root);
     DlF(root);
     DlE(root);
     DlM(root,2);
}
