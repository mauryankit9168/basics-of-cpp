#include<bits/stdc++.h>
#include<list>
using namespace std;

class graph{
    int val;
    list<int>*l;

    public: 
    graph(int val){
        this->val=val;
        l=new list<int>[val];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printList(){
        for(int i=0;i<val;i++){
            cout<<i<<":";
            for(int n:l[i]){
                cout<<n<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main(){
    graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.printList();
    return 0;
}