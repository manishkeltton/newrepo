#include<bits/stdc++.h>
using namespace std;
struct Node{
   char data;
   struct Node *left;
   struct Node *right;
};

  void preorder(Node *root){
     if(root==NULL) return;
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
  }

  void inorder(Node *root){
     if(root==NULL) return;
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
  }
  void postorder(Node *root){
     if(root==NULL) return;
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
 }

 Node* insert(Node *root, char data){
       if(root==NULL){
          root = new Node();
          root->data=data;
          root->left=root->right=NULL;
       }
        else if(data>=root->data)
             root->right=insert(root->right,data);
        else 
             root->left = insert(root->left,data);
       

   return root;
 }
 
  int main(){
     Node *root=NULL;
     root = insert(root,'M');
     root = insert(root,'B');
     root = insert(root,'Q');
     root = insert(root,'Z');
     root = insert(root,'A');
     root = insert(root,'C');
     
   cout<<"PREODER: ";
     preorder(root); 
    cout<<"\nINORDER: ";
     inorder(root);
   cout<<"\nPOSTORDER: ";
     postorder(root);
     
 }

   




















