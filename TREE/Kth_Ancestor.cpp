#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left ;
    Node* right;

    Node(int data){
        this ->data = data;
        left = NULL;
        right = NULL;
    }
};

    Node* buildTree() {
	int data; 
	cout << "Enter the data: " << endl;
	cin >> data;

	if(data == -1) {
		return NULL;
	}
}

                // 1
                // / \
                // 2  3
                // / \
                // 4 5

                // k = 1
                // p = 4
    bool kancestor(Node*root, int k, Node*p){
    //BASE CASE
    if(root == NULL)
    return false;

    if(root -> data == p -> data){
        return true;
    }
    if(k == 0){
         return false;
    }

    bool leftAns = kancestor(root->left, k, p);
    bool rightAns = kancestor(root->right, k, p);

    //RERURN FROM RECURSIVE CALL THEN CHECK LEFT MAIN ANSWER MILA YA NI
    if(leftAns || rightAns){
        k--;
        if(k == 0)
        cout<<"Answer: "<<root -> data<<endl;
        k = -1;
    }

        return leftAns || rightAns;
    }
}

int main(){

    Node*root = NULL;
    root = buildTree();

    int k =1;
    int p = 4;
    bool found = kancestor(root, k, p);

}