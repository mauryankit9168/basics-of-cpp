#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printList(){
        for(auto i:adj){
            cout<<i.first<<':';
            for(auto j:i.second){
                cout<<j<<',';
            }
            cout<<endl;
        }

    }
    void dfsHelper(int node,unordered_map<int,list<int>>&adj,vector<int>&ans,unordered_map<int,bool>&vis){
        vis[node] = true;
        ans.push_back(node);
        for (auto nbr : adj[node]) {
            if (!vis[nbr]) dfsHelper(nbr, adj, ans, vis);
        }
    }

    void dfs(int start){
        vector<int>ans;
        unordered_map<int,bool>vis; 
        for (auto &p : adj) {
            int node = p.first; 
            if(!vis[node]){ 
                dfsHelper(node,adj,ans,vis); 
            } 
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    graph g;
    int start;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        if(i==0) start=u;
        g.addEdge(u,v);
    }
    cout << "\nAdjacency List:\n";
    g.printList();

    cout << "\nDFS Traversal:\n";
    g.dfs(start);
    return 0;
}