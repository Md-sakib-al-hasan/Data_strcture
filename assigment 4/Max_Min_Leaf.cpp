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
vector<int>v;
void leaf_found(Node *root){
      if(root ==NULL) return;
      leaf_found(root->left);
      leaf_found(root->right);
      if(root->left== NULL && root->right==NULL){
         v.push_back(root->val);
      }
}
int main()
{    
     Node *root=input_tree();
     leaf_found(root);
     int max=INT16_MIN;
     int min=INT16_MAX;
     for(int c:v){
         if(c>max){
            max=c;
         }
         if(c<min){
            min=c;
         }
     }
     cout<<max<<" "<<min<<endl;
     return 0;
}