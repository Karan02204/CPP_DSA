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

void sumatlevel(Node* root ,int k){
    int count = 0;
    int sum = 0;
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp==NULL){
            count++;
            if(!q.empty()){
                q.push(NULL);
            }
            continue;
        }

        if(count == k-1){
            sum += temp->data;
        }

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

        if(count>=k) break;
    }

    cout << sum << endl;
}

int countNode(Node* root){
    if(root == NULL) return 0;
    return 1 + countNode(root->left) + countNode(root->right);
}

int sumoftree(Node* root){
    if(root == NULL) return 0;
    return root->data + sumoftree(root->left) + sumoftree(root->right);
}

int heightoftree(Node* root){
    if(root == NULL) return 0;
    
    int left = heightoftree(root->left);
    int right = heightoftree(root->right);

    return max(left,right)+1;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);

    // cout << countNode(root) << endl;
    // cout << sumoftree(root);
    cout << heightoftree(root);
}