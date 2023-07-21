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
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
        
    }
    
}
// vector<int>v;
// void find_left_val(Node * root){
//     queue<pair<Node*,int>>q;
//     q.push({root,1});
//     int tag=0;
//     while (!q.empty())
//     {
//       pair<Node*,int> p=q.front();
//       Node* nd=p.first;
//       int level=p.second;
//       q.pop();
//      if(level> tag){
//         tag=level;
//         v.push_back(nd->val);
//      }

//       if(nd->left)q.push({nd->left,level+1});
//       if(nd->right)q.push({nd->right,level+1});
//     }
    
    
// }

    //the down program complite frecquncy arr and the up program complited to use swapping 




vector<int>v;
void find_left_val(Node * root){
    queue<pair<Node*,int>>q;
    q.push({root,1});
    bool arr[3000]={false};
    while (!q.empty())
    {
      pair<Node*,int> p=q.front();
      Node* nd=p.first;
      int level=p.second;
      q.pop();
     if(arr[level]==false){
        arr[level]=true;
        v.push_back(nd->val);
     }

      if(nd->left)q.push({nd->left,level+1});
      if(nd->right)q.push({nd->right,level+1});
    }
    
    
}
int main()
{
    Node *root= input_tree();
    cout<<"sk"<<endl;
    find_left_val(root);
    for(int c:v){
        cout<<c<<endl;
    }
}