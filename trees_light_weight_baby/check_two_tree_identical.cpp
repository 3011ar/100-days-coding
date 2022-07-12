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

class Solution {
public:
    bool isSameTree(Node* t1, Node* t2) {
        
        
        if(t1 == NULL || t2 == NULL){
            return(t1==t2);
        }
        
        return (t1->data == t2->data) && isSameTree(t1->left , t2->left) && isSameTree(t1->right,t2->right);
    }
};


int main(){

    Node* root_1 = new Node(1);
    root_1->left = new Node(2);     
    root_1->right = new Node(3);

    root_1->left->left = new Node(4);
    root_1->left->right = new Node(5);

    root_1->right->left = new Node(6);
    root_1->right->right = new Node(7);


    Node* root_2 = new Node(1);
    root_2->left = new Node(2);     
    root_2->right = new Node(3);

    root_2->left->left = new Node(4);
    root_2->left->right = new Node(5);

    root_2->right->left = new Node(6);
    root_2->right->right = new Node(7);

    
    Solution obj;
    obj.isSameTree(root_1 ,root_2);

    if(obj.isSameTree(root_1 , root_2)){
        cout << "true" << endl;
    }

    return 0;
}