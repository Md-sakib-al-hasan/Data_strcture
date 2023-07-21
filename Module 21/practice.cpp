#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node (int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
Node * input_tree(){
    queue<Node*>q;
    int val;
    cin>>val;
    Node *root;
    if(val == -1) root=NULL;
    else root = new Node (val);
   if(root) q.push(root);
    while (!q.empty() )
    {   Node *f=q.front();
         q.pop();

         int left,right;cin>>left>>right;
        Node *myLeft;
        Node *myRight;
        if(left== -1) myLeft=NULL;
        else myLeft= new Node(left);
        if(right== -1) myRight=NULL;
        else myRight= new Node (right);
        
       f->left=myLeft;
       f->right=myRight;

       if(f->left)q.push(f->left);
       if(f->right)q.push(f->right);

         

    }
    return root; 
}

void level_order(Node *root){
    queue<Node*>q;
    q.push(root);
    while (! q.empty())
    {
        Node *f=q.front();
        q.pop();

        cout<<f->val<<endl;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
        
    }
    
}
// bool binarY_search(Node *root,int x){
//   if(root==NULL) return false;
//   if(x==root->val) return true;
//   else if (x<root->val)
//   {
//     return binarY_search(root->left,x);
//   }else{
//     return binarY_search(root->right,x);
//   }
  
// }

void insert_bst(Node * &root,int x){
    if(root==NULL){
      root= new Node(x);
      return ;
    }
    if(x<root->val){
        if(root->left == NULL){
            root->left= new Node(x);
        }else{
            insert_bst(root->left,x);
        }
    }else{
        if(root->right == NULL){
            root->right= new Node(x);
        }else{
            insert_bst(root->right,x);
        }
    }
}
int main()
{   Node *root=input_tree();
      insert_bst(root,77);
     level_order(root);
     return 0;
}