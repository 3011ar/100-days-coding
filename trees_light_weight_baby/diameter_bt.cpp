#include<iostream>

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
    int diameterOfBinaryTree(Node* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(Node* node, int& diameter) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};

int main(){

    Node* root = new Node(4);

    root->left = new Node(7);     
    root->right = new Node(8);



    root->right->left = new Node(1);
    root->right->right = new Node(0);

    root->right->left->left = new Node(3);

    Solution obj;
    cout << obj.diameterOfBinaryTree(root) << endl;


    return 0;
}