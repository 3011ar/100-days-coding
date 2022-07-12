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

class Solution{

    public:

    int max_path_sum(Node* root){
        int maximum = INT_MIN;
        max_path(root , maximum);
        return maximum;
    }

    private:

    int max_path(Node* root , int &maximum){

        if(root == NULL){
            return 0;
        }

        int left_sum = max(0, max_path(root->left , maximum));
        int right_sum = max(0, max_path(root->right , maximum));

        maximum = max(maximum,left_sum+right_sum + root->data);

        return root->data + max(left_sum,right_sum);


    }
};

int main(){

    Node* root = new Node(-10);
    root->left = new Node(9);     
    root->right = new Node(20);

  

    root->right->left = new Node(15);
    root->right->right = new Node(7);

    Solution obj;

    cout << obj.max_path_sum(root) << endl;


    return 0;
}