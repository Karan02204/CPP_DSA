#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node* root){
    if(root==NULL) return;
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* insertBST(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left = insertBST(root->left,val);
    }
    else if(val> root->data){
        root->right = insertBST(root->right,val);
    }

    return root;

}

Node* binarySearch(Node* root, int key){
    if(root==NULL || root->data==key){
        return root;
    }

    else if(key<root->data){
        return binarySearch(root->left,key);
    }

    else if(key>root->data){
        return binarySearch(root->right,key);
    }
}




int minElement(Node* root){
    if(root=NULL) return 0;
    Node* temp = root;

    while(temp->left!=NULL){
        temp = temp->left;
    }

    return temp->data;
}

int maxElement(Node* root){
    if(root==NULL) return 0;
    Node* temp = root;

    while(temp->right!=NULL){
        temp = temp->right;
    }

    return temp->data;
}

int main()
{

}