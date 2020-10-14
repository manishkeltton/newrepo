#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
struct node* update(struct node*start,int p);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start = NULL;
        struct node* cur = NULL;
        struct node* ptr = NULL;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new node(a);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        struct node*str=update(start,p);
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->next;
        }
        cout<<endl;  
    }
}
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

  struct node*update(struct node*start,int p)
{
    queue<int>q;
   node* temp = start;
   node* st = start;
    while(temp->data!=p){
        q.push(temp->data);
       // free(temp);
       free(start);
        start = start->next;
        temp = temp->next;
    }
       start = start->next;
        q.push(temp->data);
        
        while(st->next!=NULL){
           st = st->next; 
        }
        node* head=NULL;
        while(!q.empty()){
          struct node* pq = new node(q.front());
            //pq->data = q.front();
            //pq->next = NULL;
             q.pop();
             if(head==NULL){
                 head=pq;
             }else{
                 node* tp = head;
                 while(tp->next!=NULL){
                     tp = tp->next;
                 }
                 tp->next = pq;
             }
        }
        st->next = head;
        
        
 return start;
}




