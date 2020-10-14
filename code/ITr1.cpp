#include<bits/stdc++.h>
using namespace std;
struct Node{
     int key;
       struct Node *left, *right;
 };

 Node* insert(Node* root, int key){
     Node* newNode = new Node();
     newNode->key=key;
     newNode->left=newNode->right=NULL;
     Node* x = root;
     Node* y= NULL;

    while(x!=NULL){
      y=x;
     if(key<x->key)
       x=x->left;
     else
       x=x->right;
    }

   if(y==NULL)
      y=newNode;
   else if(key<y->key)
      y->left=newNode;
   else
      y->right = newNode;
  return y;

 }

 void print(Node* root){
    if(root==NULL)
       return;
     queue<Node*>Q;
      Q.push(root);
    while(!Q.empty()){
       Node* cur=Q.front();
           Q.pop();

       cout<<cur->key<<" ";
      if(cur->left!=NULL) Q.push(cur->left);
      if(cur->right!=NULL) Q.push(cur->right);
    }
 }

int main(){
    Node* root = NULL;
       root = insert(root,50);
          insert(root,30);
          insert(root,20);
          insert(root,40);
          insert(root,70);
          insert(root,60);
          insert(root,80);
    print(root);
 return 0;
 }


























