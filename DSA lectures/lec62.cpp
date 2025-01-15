#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d) {
            this -> data = d;
            this ->left = NULL;
            this -> right = NULL;

        }
};

struct node {
    int data;
    node* left;
    node* right;

    node(int value){
        data = value;
        left = right = nullptr;
    }
};

node* buildtree(node* root) {

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildtree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildtree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}


void inorder(node* root) {
    //base case
    if(root == NULL) {
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

int main() {

    node* root = NULL;

   
    
    //creating a Tree
    root = buildtree(root);

    //level order
    cout << "Printing the level order traversal is: "<<endl;
    levelOrderTraversal(root);                      

    cout << endl << "inorder traversal is :";
    inorder(root);

    cout << endl << "Preorder traversal is :";
    preorder(root);

    cout<< endl << "Postorder traversal is :";
    postorder(root);

    
    return 0;
}