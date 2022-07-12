#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{

    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

vector<int>iterative_inorder(Node* root){

    vector<int>stored_inorder;

    stack<Node*>s;
    
    Node * node = root;

    while(true){
        if(node!=NULL){
            s.push(node);
            node = node->left;
        }
        else{
            if(s.empty() == true) break;
            node = s.top();
            s.pop();
            stored_inorder.push_back(node->data);
            node = node ->right;
        }
    }


    return stored_inorder;
}
int main(){

    Node* root = new Node(1);

    return 0;
}