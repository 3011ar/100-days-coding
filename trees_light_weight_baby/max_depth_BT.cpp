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

int max_depth(Node* root){

    if(root == NULL){
        return 0;
    }

    int left_subtree = max_depth(root->left);
    int right_subtree = max_depth(root->right);

    return 1+max(left_subtree,right_subtree);
}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);     
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << max_depth(root);

    return 0;
}