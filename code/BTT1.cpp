#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};

 void levelorder(Node* root){
     if(root == NULL) return;
      queue<Node* >Q;
       Q.push(root);

    while(!Q.empty()){
        Node* current = Q.front();
             Q.pop();
         cout<<current->data<<" ";
       if(current->left!=NULL) Q.push(current->left);
       if(current->right!=NULL) Q.push(current->right);
    }
 }

 Node* GetNewNode(int data){

          Node* newNode = new Node();
          newNode->data = data;
          newNode->left = newNode->right = NULL;
   return newNode;
 } 

 Node* Insert(Node* root,int data){
        if(root == NULL){
           root = GetNewNode(data);
         //    cout<<root->data; 
        }
       else if(data<=root->data){
       root->left = Insert(root->left,data);
      }
       else{
          root->right = Insert(root->right,data);
       }
    
   return root;

 }

    int main(){

       Node* root = NULL;
        root = Insert(root,60);
       // cout<<root->data<<" ";
        root = Insert(root,70);
        //cout<<root->data<<" ";
        root = Insert(root,55);
        root = Insert(root,65);
        root = Insert(root,75);
        root = Insert(root,40);
   levelorder(root);
   
   }



 
















