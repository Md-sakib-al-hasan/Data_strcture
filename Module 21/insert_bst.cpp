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
  void insert(Node * &root,int x){
        if(root ==NULL){
            root= new Node(x);
            return ;
        }
        if(x<root->val){
            if(root->left==NULL){
              root->left= new Node(x);
            }else{
             insert(root->left,x);
            }
        }else{
            if(root->right==NULL){
                root->right=new Node(x);
            }else{
             insert(root->right,x);
            }
        }

    }
int main()
{
     Node *root=input_tree();
       int x;cin>>x;
       insert(root,x);
      level_order(root);
     
     return 0;
}