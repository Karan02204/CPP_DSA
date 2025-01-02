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

Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);


    if(root->data>val){
        root->left = insert(root->left,val);
    }
    else if (root->data<val){
        root->right = insert(root->right,val);
    }
    return root;
}

void preOrder(Node* root,int* result,int* index){
    if(root==NULL) return;
    cout << root->data << " ";
    result[*index] = root->data;
    *index = *index + 1;
    preOrder(root->left,result,index);
    preOrder(root->right,result,index);
}

void displayTraversal(int result[],int index){
    for(int i=0;i<index/2;i++){
        swap(result[i],result[index-i-1]);
    }

    for(int i=0;i<index;i++){
        cout << result[i] << " ";
    }
}

int main()
{
    int n,x;
    cin >> n;
    Node* root = NULL;
    for(int i=0;i<n;i++){
        cin >> x;
        root=insert(root,x);
    }

    int result[1000];
    int index = 0;

    preOrder(root,result,&index);
    cout << endl;
    displayTraversal(result,index);


}