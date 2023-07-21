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


vector<int>v1;
vector<int>v;
void level_order(Node *root){
 if(root==NULL) return;
  
  level_order(root->left);
  level_order(root->right);
  v.push_back(root->val);
}
void level_order1(Node *root){
   if(root==NULL) return;
  level_order1(root->left);
   v1.push_back(root->val);
  level_order1(root->right);
 
  
}
int main()
{
    Node *root= input_tree();
   level_order(root);
   Node *root1= input_tree();
   level_order1(root1);
   for(int c:v){
    cout<<c<<" ";
   }
   cout<<endl;
   for(int c:v1){
    cout<<c<<" ";
   }
}