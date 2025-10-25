#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v){
        adj[u].push_back(v);
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

    void topologicalSortHelper(int node,stack<int>&stk,unordered_map<int, bool>&vis,unordered_map<int,list<int>>&adj){
        vis[node]=true;

        for(auto nbr:adj[node]){
            if(!vis[nbr]){
                topologicalSortHelper(nbr,stk,vis,adj);
            }
        }
        stk.push(node);
    }
    
    void topologicalSort(){
        unordered_map<int, bool>vis;
        stack<int>stk;
        for(auto &p:adj){
            int node=p.first;
            if(!vis[node]){
                topologicalSortHelper(node,stk,vis,adj);
            }
        }
        while(!stk.empty()){
            cout<<stk.top()<<" ";
            stk.pop();
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    graph g;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    cout << "\nAdjacency List:\n";
    g.printList();

    cout << "\n topological Sort:\n";
    g.topologicalSort();
    return 0;
}