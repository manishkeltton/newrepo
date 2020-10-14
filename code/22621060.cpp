#include <bits/stdc++.h>
using namespace std;

struct Trie {
  bool isLeaf;
  long long val;
  long long rVal;
  long long fVal;
  Trie *children[2];
};

Trie* createNode() {
  Trie *newNode = new Trie;
  newNode->isLeaf = false;
  newNode->val = -1;
  newNode->rVal = -1;
  newNode->fVal = 0;
  for(long long i = 0 ; i < 2 ; ++i)
  newNode->children[i] = NULL;

  return newNode;
}

void insertNode(Trie *root, long long n) {
  Trie *node = root;
  long long num = n;
  for(long long i = 1 ; i <= 60 ; ++i) {
    long long bit = num&1;
    if(!node->children[bit])
    node->children[bit] = createNode();
    node = node->children[bit];
    num = num>>1;
  }
  node->isLeaf = true;
  node->val = n;
}

void dfs(Trie *node) {
  node->fVal = 0;
  node->rVal = -1;

  if(node->isLeaf) {
    node->rVal = node->val;
    return;
  }
  
  for(long long i = 0 ; i < 2 ; ++i) {
    if(node->children[i]) {
      dfs(node->children[i]);
      node->fVal ^= node->children[i]->fVal;
      if(node->rVal == -1)
      node->rVal = node->children[i]->rVal;
      else if(node->children[i]->rVal != -1) {
        node->fVal ^= (((node->rVal)^(node->children[i]->rVal))-1);
        node->rVal = -1;
      }
    }
  }
}

pair<long long, long long> solve(Trie *node, long long num) {
  long long fu = 0;
  long long ru = -1;
  if(node->isLeaf)
  return {fu, ru};

  for(long long i = 0 ; i < 2 ; ++i) {
    if(!node->children[i])
    continue;
    long long bit = num&1;
    pair<long long, long long> fv;
    if(bit == i)
    fv = solve(node->children[i], num>>1);
    else
    fv = {node->children[i]->fVal, node->children[i]->rVal};
    fu ^= fv.first;
    if(ru == -1)
    ru = fv.second;
    else if(fv.second != -1) {
      fu ^= ((ru^(fv.second))-1);
      ru = -1;
    }
  }

  return {fu, ru};
}

int main() {
  long long t;
  cin >> t;
  while(t--) {
    long long n;
    cin >> n;
    Trie *root = createNode();
    long long arr[n];
    for(long long i = 0 ; i < n ; ++i) {
      cin >> arr[i];
      insertNode(root, arr[i]);
    }
    
    dfs(root);
    for(long long i = 0 ; i < n ; ++i) {
      pair<long long, long long> ans = solve(root, arr[i]);
      if(ans.second != -1)
      ans.first ^= ans.second;
      cout << ans.first << " ";
    }

    cout << endl;
  }

  return 0;
}