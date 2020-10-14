#include<bits/stdc++.h>
using namespace std;

   void DFs(vector<int>adj[], int s, bool visited[]){
        visited[s] = true;
       cout<<" "<<s;
       vector<int>::iterator it;
      for(it = adj[s].begin();it!=adj[s].end();++it){
            if(!visited[*it])
              DFs(adj,*it,visited);
      }
   }

   void BFs(vector<int>adj[], int s,int n){
        bool visited[n];
     memset(visited,0,sizeof(visited));
        visited[s]=1;
        queue<int>Q;
          Q.push(s);

        while(!Q.empty()){
          int v = Q.front();
            Q.pop();
          cout<<" "<<v;
          vector<int>::iterator it;
          for(it=adj[v].begin();it!=adj[v].end();++it)
             {
              if(!visited[*it]){
                 visited[*it]=1;
                  Q.push(*it);
              }
            }
        }
   }

  void addEdge(vector<int> adj[],int src,int dest){
       adj[src].push_back(dest);
  }
  int main(){
     int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,4,2);
    addEdge(adj,2,3);
   cout<<"DFS Traversals= "<<endl;
    bool visited[v];
   memset(visited,0,sizeof(visited));
    DFs(adj,0,visited);
    cout<<"\n\n";
    cout<<"BFS Traversal= "<<endl;
    BFs(adj,0,v);
   return 0;
    
  }































