#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void dfs(node* root){
    if(root=nullptr){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* curr=q.front();
        q.pop();
        if(!q.empty()){
            
        }
    }
}

node* createTree(){
    node* root = new node(1);          
    root->left = new node(2);         
    root->right = new node(3);         

    root->left->left = new node(4);    
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    return root;
}

int main(){
    node* root=createTree();
    dfs(root);
    return 0;
}