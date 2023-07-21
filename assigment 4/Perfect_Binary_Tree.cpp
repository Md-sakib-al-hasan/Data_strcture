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
int counter=0;
void level_order(Node *root){
    queue<Node*>q;
   if(root)q.push(root);
    while (! q.empty())
    {
        Node *f=q.front();
        q.pop();

             counter++;
         
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
        
    }
    
}
int max_hight(Node *root){
    if(root==NULL) return 0;
    int l=max_hight(root->left);
    int r=max_hight(root->right);
    return max(l,r)+1;
}
int main()
{    
     Node *root=input_tree();
     int hi=max_hight(root);
      level_order(root);
     if(pow(2,hi)-1 ==counter){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
     return 0;
}