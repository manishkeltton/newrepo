#include<iostream>
using namespace std;

struct node{
 
     int data1;
     int data2;
     struct node* link;

  };

int main(){
    node ob1;
    
     ob1.link = NULL;
     ob1.data1 = 10;
     ob1.data2 = 20;

    node ob2;

     ob2.link=NULL;
     ob2.data1=30;
     ob2.data2=40;

   //Link ob1 & ob2

    ob1.link = ob2;

   cout<<ob1.link->data1<<" "<<ob1.link->data2<<endl;
  

}















