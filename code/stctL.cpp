#include<iostream>
using namespace std;
struct Node{
   int d;
    Node* nt;
};
struct Node* Head=NULL;
void push(int d){
   Node* nd = new Node();
   nd->d = d;
   nd->nt = Head;
}
