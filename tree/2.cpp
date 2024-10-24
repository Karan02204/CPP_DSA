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

void rightview(Node* root){
    if(root == NULL){
        return ;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // we will not add null in queue , we will calculate the size of queue and check how many nodes are stored and traverse over it
        int size = q.size();

        for(int i = 0;i<size;i++){
            //create a current pointer which will start from the front of the queue

            Node* curr = q.front();
            q.pop();

            if(i==size-1){
                cout << curr->data << " ";
            }

            // then we will go on the left and right of the current node

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
}

void leftview(Node* root){
    if(root == NULL){
        return ;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // we will not add null in queue , we will calculate the size of queue and check how many nodes are stored and traverse over it
        int size = q.size();

        for(int i = 0;i<size;i++){
            //create a current pointer which will start from the front of the queue

            Node* curr = q.front();
            q.pop();

            if(i==0){
                cout << curr->data << " ";
            }

            // then we will go on the left and right of the current node

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
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

bool getPath(Node* root, int key , vector<int>& path){
    if(root == NULL){
        return false;
    }
    
    path.push_back(root->data);
    if(root->data == key){
        return true;
    }
    
    if(getPath(root->left, key , path) || getPath(root->right , key , path)){
        return true;
    }

    path.pop_back();
    return false;
}

int lowestcommonAncestor(Node* root,int node1 , int node2){
    vector<int> path1;
    vector<int> path2;

    if(!getPath(root , node1 , path1)  && !getPath(root , node2 , path2)){
        return -1;
    }

    int pathchange;
    for(pathchange = 0; pathchange<path1.size() && path2.size();pathchange++){
        if(path1[pathchange] != path2[pathchange]){
            break;
        }
    }

    return path1[pathchange];
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->left->left->left= new Node(7);
    root->left->left->right= new Node(8);

    // cout << countNode(root) << endl;
    // cout << sumoftree(root);
    // int lca = lowestcommonAncestor(root, 4,5);

    // if(lca == -1){
    //     cout << "No common ancestor found" << endl;
    // }
    // else{
    //     cout << "LCA is : " << lca << endl;
    // }

    printLevelOrder(root);
}