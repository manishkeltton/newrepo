#include<iostream>
using namespace std;
struct Node{
   int data;
   Node* link;
};
struct Node* tp1=NULL;
  struct Node* root=NULL;
struct Node* insert(Node* root, int data){
    Node* nd=new Node();
     nd->data = data;

    if(root==NULL){
     nd->link = root;
       root=nd;
      return root ;
     }
       nd->link=NULL;
      Node* ptr = root;
      while(ptr->link!=NULL){
        ptr=ptr->link;
       }
      ptr->link=nd;
    
  // root = nd;
 return root;   
}



void merge(Node* root, Node* Head){
     tp1 = root;
     Node*  temp2;
     temp2 = tp1;
     while(temp2->link!=NULL)
          temp2 = temp2 ->link;

       temp2->link = root;
         int count=0;
    while(tp1!=NULL){
       cout<<tp1->data<<" ";
        tp1=tp1->link;
          count++;
      if(count==10)
         break;

    }
    

}

int main(){
    
 //   Node* Head=NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,3);
    root = insert(root,4);
    root = insert(root,5);
   
    merge(root,root);
}
























