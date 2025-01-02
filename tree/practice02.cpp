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

Node* insertBST(Node* root , int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left = insertBST(root->left,val);
    } else {
        root->right = insertBST(root->right,val);
    }
    return root;
}

Node* binarySearch(Node* root, int key){
    if(root==NULL || root->data == key){
        return root;
    } else if(key < root->data){
        return binarySearch(root->left,key);
    } else if(key>root->data){
        return binarySearch(root->right,key);
    }
}

int MinElement(Node* root){
    if(root==NULL) return 0;
    Node* temp = root;

    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp->data;
}

Node* deleteBST(Node* root,int val){
    if(root == NULL) return root;

    if(root->data == val){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left!=NULL && root->right!=NULL){
            int minelement = MinElement(root->right);
            root->data = minelement;
            root->right = deleteBST(root->right,minelement);
            return root;
        }
    } else if(root->data>val){
        root->left = deleteBST(root->left,val);
        return root;
    } else {
        root->right = deleteBST(root->right,val);
        return root;
    }
}


void printLevelOrder(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    //q.push(NULL);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";
        if(current->left!=NULL){
            q.push(current->left);
        }
        
        if(current->right!=NULL){
            q.push(current->right);
        }

    }
}

int LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(n1<root->data && n2<root->data){
        return LCA(root->left,n1,n2);
    }

    if(n1>root->data && n2>root->data){
        return LCA(root->right,n1,n2);
    }

    return root->data;
}

int main(){
    Node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,8);
    insertBST(root,7);
    insertBST(root,9);
    insertBST(root,10);

    // inOrder(root);
    // cout << endl;
    // deleteBST(root,3);
    // inOrder(root);
    // if(binarySearch(root,8)){
    //     cout << "Element found in the BST" << endl;
    // }
    // else{
    //     cout << "Element not found" << endl;
    // }

    inOrder(root);
    cout << endl;

    //deleteBST(root,3);
    //inOrder(root);
    //cout << endl;

    printLevelOrder(root);
    cout << endl;   
    cout << LCA(root,4,8);
    
}