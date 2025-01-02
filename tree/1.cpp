#include <iostream>
using namespace std;

class Node{
    public:
    Node* right;
    Node* left;
    int data;

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

/*
preoder -> root , left subtree , right subtree
*/

void preOrder(Node* root){
    if(root == NULL) return ;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return ;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(Node* root){
    if(root == NULL) return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    Node* root = new Node(1);

    root->left = new Node(3);
    root->right = new Node(2);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right= new Node(7);

    preOrder(root);

    cout << endl;

    inOrder(root);

    cout << endl;

    postOrder(root);
}