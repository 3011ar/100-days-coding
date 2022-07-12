#include<iostream>

using namespace std;

struct Node
{
    int data;                    // value at the node
    struct Node* left;           //left pointer that will point the children of the node
    struct Node* right;          //right pointer that will point the children of the node

    Node(int val){               //a constructor to assign the value to the data(root node/children)
        data = val;
        left = right = NULL;      // in starting the node left and right pointer will point NULL
    }
};


int main(){

    struct Node* root = new Node(1);          // creating the root node and assigning its value using constructor

    root->left = new Node(2);     // asssigning value to its children
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return 0;
}