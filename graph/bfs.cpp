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

    void bfs(int start){
        unordered_map<int,bool>vis;
        queue<int>q;
        q.push(start);
        vis[start]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cout<<node<<',';

            for(int n:adj[node]){
                if(!vis[n]){
                    vis[n]=true;
                    q.push(n);
                }
            }
        }
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
    g.printList();
    g.bfs(start);
    return 0;
}