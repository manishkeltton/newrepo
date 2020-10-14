#include<iostream>
using namespace std;
struct node{
    int data;
     struct node *left;
     struct node *right;

};

struct node* newNode(int data){
   struct node* node=(struct node*)malloc(sizeof(struct node));

   node->data = data;
   node->left = NULL;
   node->right = NULL;
  return node;

}

  int main(){

    struct node *root = newNode(1);
    cout<<root->data<<endl;
    root->left = newNode(2);
    cout<<root->left->data<<endl;
    root->right = newNode(3);
    cout<<root->right->data;
    root->left->right = newNode(4);
   return 0;
  }
