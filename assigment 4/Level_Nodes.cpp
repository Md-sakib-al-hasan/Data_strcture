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
void  Level_nodes(Node * root,int x){
   queue<pair<Node*,int> >q;
   if(root)q.push({root,0});
   while (! q.empty())
   {
        pair<Node*,int> p=q.front();
        Node *node=p.first;
        int level=p.second;
        q.pop();
         if(x==level){
            v.push_back(node->val);
         }
       if(node->left)q.push({node->left,level+1});
       if(node->right)q.push({node->right,level+1});
   }
   
   
}
int main()
{    
     Node *root=input_tree();
     int x;cin>>x;
     Level_nodes(root,x);
     if(v.size()==0){
        cout<<"Invalid"<<endl;
     }else{
        for(int c:v){
            cout<<c<<" ";
        }
     }
     return 0;
}