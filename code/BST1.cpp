#include<bits/stdc++.h>
using namespace std;


struct BstNode{
    int long long data,dt;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int long long data,int long long i)
{
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    newNode->dt=i;
    return newNode;
}
BstNode* Insert(BstNode* root,int long long data,int long long i)
{
 
    if(root==NULL){
        cout<<i<<endl;
        root=GetNewNode(data,i);
        
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data,2*i);
    }
    else{
        root->right=Insert(root->right,data,2*i+1);
    }
    return root;
}

BstNode* Value(BstNode* node)
{
    BstNode* cur=node;
    while(cur->left!=NULL){
        cur=cur->left;
    }
    return cur;
}

BstNode* delNode(BstNode* root,int long long data)
{
  
    
    if(root==NULL){
        
        return root;
    }
    if(data<root->data){
    
        root->left=delNode(root->left,data);
    }
    else if(data>root->data){
        root->right=delNode(root->right,data);
    }
    else{
           cout<<root->dt<<endl;
        
            if(root->left==NULL){
                BstNode* temp=root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL){
                BstNode* temp=root->left;
                free(root);
                return temp;
            }
            
            BstNode* temp=Value(root->right);
            
            root->data=temp->data;
            
            root->right=delNode(root->right,temp->data);
    }
    return root;
}

int main()
{
    int long long n,t,i,j,k,l,l1,l2,l3;
    cin>>n;
    char a;
    
    int long long data;
    BstNode* root=NULL;
    while(n--){
        cin>>a;
        cin>>k;
        if(a=='i'){
            root=Insert(root,k,1);
        
        }
        else{
            
            root=delNode(root,k);
            
        }
    }
    
}
