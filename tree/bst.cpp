#include <iostream>
#include <Queue>
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
    if(root == NULL) return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void printLevelOrder(Node* root){
    if(root == NULL){
        return ;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp !=NULL){
            cout << temp->data << " ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }

        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

Node* insertBST(Node* root , int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val <  root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        root->right = insertBST(root->right,val);
    }
    return root;
}

Node* binarySearch(Node* root ,int key){

    if(root == NULL || root->data == key){
        return root;
    }
    
    else if(root->data>key){
        return binarySearch(root->left,key);
    }
    else if(root->data<key){
        return binarySearch(root->right,key);
    }
}

int minElement(Node* root){
    if(root == NULL) return 0;
    Node* temp = root;

    while(temp->left!=NULL){
        temp = temp->left ;
    }
    return temp->data;
}
int maxElement(Node* root){
    if(root == NULL) return 0;
    Node* temp = root;

    while(temp->right!=NULL){
        temp = temp->right ;
    }
    return temp->data;
}

// void deletebst(Node* root , int key){
//     if(root==NULL) return;
//     if(binarySearch(root,key)){
//         if(root->left == NULL && root->right == NULL){
//             delete root ;
//         }
//     };

//     if(binarySearch(root,key)){
//         if(root->left == NULL && root->right!=NULL){
//             Node* temp = root->right;
//             delete root;
//             root = temp ;
//         }
//         else if(root->left != NULL && root->right ==NULL){
//             Node* temp = root->left;
//             delete root;
//             root = temp;
//         }           
//     }
// }

Node* deleteBST(Node* root, int val){
    if(root == NULL) return root;

    if(root->data == val){
        if(root->left == NULL && root->right == NULL){
            delete root ;
            return NULL;
        }

        if(root->left == NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right ==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left!=NULL && root->right!=NULL){
            //Node* temp = root;
            int minelement = minElement(root->right);
            root->data = minelement ;
            root->right = deleteBST(root->right,minelement);
            return root;
        }

    }

    else if(root->data >  val){
        root->left = deleteBST(root->left, val);
        return root;
    }

    else{
        root->right = deleteBST(root->right, val);
        return root;
    }
}

bool isbst(Node* root , int min , int max){
    if(root==NULL) return true;
    if(root->data > min && root->data < max){
        bool left = isbst(root->left,min,root->data);
        bool right = isbst(root->right,root->data,max);
        return left && right;;
    }
    else{
        return false;
    }
}

void inordertraversal(Node* root , int& k , int& result){
    if(root == NULL) return;

    inordertraversal(root->left,k,result);
    k--;
    if(k == 0){
        result =  root->data;
        return;
    }

    inordertraversal(root->right,k,result);
}
int kMinElement(Node* root , int k){
    int result = -1;
    inordertraversal(root,k,result);
    return result;
}
void inorder(Node* root,vector<int>& vec){
    if(root==NULL){
        return;
    }
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}

bool twosumbst(Node* root,int target){
    vector<int> inorderval;

    inorder(root,inorderval);

    int i =0;
    int j = inorderval.size()-1;

    while(i<j){
        int sum = inorderval[i] + inorderval[j];
        if(sum == target){
            return true;
        }
        else{
            return false;
        }
    }
}

Node* flatten(Node* root, vector<int>& vec){
    
    vector<int> inorderval;
    inorder(root, inorderval);

    Node* newroot = new Node(inorderval[0]);
    Node* curr = newroot;

    for(int i=1;i<inorderval.size();i++){
        Node* temp = new Node(inorderval[i]);
        curr->right = temp;
        curr->left = NULL;
        curr = temp;    
    }
    return newroot;
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
    // vector<int> vec1;
    // cout << flatten(root,vec1);

    printLevelOrder(root);
    
}