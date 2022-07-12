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

vector<int>iterative_preorder(Node* root){

    vector<int>stored_preorder;

    if(root == NULL){
        return stored_preorder;
    }

    stack<Node*>s;
    s.push(root);

    while(!s.empty()){

        root = s.top();
        s.pop();
        stored_preorder.push_back(root->data);
        if(root->right!=NULL){
            s.push(root->right);
        }
        if(root->left!=NULL){
            s.push(root->left);
        }
    }

    return stored_preorder;

}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);     
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int>ans = iterative_preorder(root);

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }


    return 0;
}