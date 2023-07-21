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
};
void level_order(Node *root){
    queue<Node*>q;
    q.push(root);
    while (! q.empty())
    {
        Node *f=q.front();
        q.pop();

        cout<<f->val<<endl;
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
        
    }
    
}   

                //four
    vector<int>v4;
    void In_order2(Node *root){
        if(root==NULL) return;
        In_order2(root->left);
        v4.push_back(root->val);
        In_order2(root->right);
    }

           //three
    vector<int>v3;
    void In_order(Node *root){
        if(root==NULL) return;
        In_order(root->left);
        v3.push_back(root->val);
        In_order(root->right);
    }
           //two
    vector<int>v2;
    void pre_order2(Node *root){
        if(root==NULL) return;
        v2.push_back(root->val);
        pre_order2(root->left);
        pre_order2(root->right);
    }

         //one
vector<int>v;
void pre_order(Node *root){
    if(root==NULL) return;
    v.push_back(root->val);
    pre_order(root->left);
    pre_order(root->right);
}
int main()
{    
     Node *root=input_tree();
     pre_order(root);
     In_order(root);
      Node *root2=input_tree();
     pre_order2(root2);
     In_order2(root2);
     cout<<"sk"<<endl;
     if(v==v2 && v3==v4 ){
        cout<<"true";
     }else{
        cout<<"false";
     }
     return 0;
}