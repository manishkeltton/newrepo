#include<iostream>
using namespace std;
struct node{
    int data;
     struct node* prev_link;
     struct node* next_link;
  };

 int main(){

    node ob1;
 
    ob1.prev_link = NULL;
    ob1.next_link = NULL;
    ob1.data = 10;

   node ob2;
  
    ob2.prev_link = NULL;
    ob2.next_link = NULL;
    ob2.data = 20;

   node ob3;

    ob3.prev_link = NULL;
    ob3.next_link = NULL;
    ob3.data = 30;

    ob1.next_link = &ob2;
    ob2.next_link = &ob3;

    ob2.prev_link = &ob1;
    ob3.prev_link = &ob2;
 
  cout<<ob1.data<<" ";
  cout<<ob1.next_link->data<<" ";
  cout<<ob1.next_link->next_link->data<<endl;

  cout<<ob2.prev_link->data<<" ";
  cout<<ob2.data<<" ";
  cout<<ob2.next_link->data<<endl;

  cout<<ob3.prev_link->prev_link->data<<" ";
  cout<<ob3.prev_link->data<<" ";
  cout<<ob3.data<<endl;

 return 0;

 }

















