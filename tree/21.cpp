#include <iostream>
using namespace std;

// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a node in the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

// Postorder traversal and counting odd nodes
void postOrderTraversal(Node* root, int& oddCount) {
    if (root == nullptr) return;

    // Traverse the left subtree
    postOrderTraversal(root->left, oddCount);

    // Traverse the right subtree
    postOrderTraversal(root->right, oddCount);

    // Process the current node
    cout << root->data << " ";
    if (root->data % 2 != 0) {
        oddCount++;
    }
}

int main() {
    Node* root = nullptr;

    int n;
    cout << "Enter the number of nodes in the BST: ";
    cin >> n;

    cout << "Enter the node values:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout << "Postorder Traversal: ";
    int oddCount = 0;
    postOrderTraversal(root, oddCount);
    cout << endl;

    cout << "Number of odd nodes: " << oddCount << endl;

    return 0;
}
