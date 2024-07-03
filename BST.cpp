#include<bits/stdc++.h>
using namespace std;
struct BST{
	int data;
	BST * pleft;
	BST * pright;
}; 
BST * FindBST(BST *Root,int x){
	BST *root = Root;
	while(root!=NULL){
		if(root->data == x) return root;
		else if(root->data>x) root = root->pleft;
		else root = root->pright;
	}
	return root;
}
int main(){
    BST* root = new BST(); root->data = 50;
    root->pleft = new BST();root->pleft->data = 30;
    root->pright = new BST(); root->pright->data = 70;
    int x = 30; 
    BST* a = FindBST(root, x);
    if(a!=NULL) cout << "tim thay";
	else cout << "khong tim thay"; 
    
    return 0;
} 
