#include<bits/stdc++.h>
using namespace std;
struct Node{
   int d;
   Node *lt,*rt;
};

void ls(Node *r){

   int p=0;
    if(r==NULL){
        cout<<p<<endl;
     return;
   }
     
      queue<Node*>Q;
         Q.push(r);

      while(!Q.empty()){
        Node* cur = Q.front();
            Q.pop();

        if(cur->lt == NULL && cur->rt == NULL)
        {
            p=p+cur->d;
        }
        else{
           if(cur->lt!=NULL) Q.push(cur->lt);
           if(cur->rt!=NULL) Q.push(cur->rt);
          }
      }
       cout<<p<<endl;
   

}
Node* insert(Node *r,int d){
    if(r==NULL)
   {
      r=new Node();
      r->d=d;
      r->lt=r->rt=NULL;
   }
   else if(d>=r->d)
      r->rt=insert(r->rt,d);
   else
      r->lt=insert(r->lt,d);

  return r;

}
 int main(){
    

    int T;
     cin>>T;
     while(T--){
        Node *r=NULL;
        int N;
          cin>>N;
           while(N--){
            int a;
            cin>>a;
            r = insert(r,a);
          }
      ls(r);
   }
 }
