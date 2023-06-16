#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node(int val){
    this->val=val;
      next=NULL;
   }
};
 void printsk(Node *head,Node *tail){
    cout<<head->val<<" "<<tail->val<<endl;
 }
void INset_list(Node *&head,Node *&tail,int op){
    Node *newnode = new Node(op);
    if(head==NULL){
       head=newnode;
       tail=newnode;
       return ;
    }
    tail->next=newnode;
    tail=newnode;
}

 void INsert(Node *&head,Node *&tail,int v){
    Node *newnode= new Node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    newnode->next=head;
    head=newnode;

 }
int main()
{
    Node *head=NULL;
    Node* tail=NULL;
    int q;cin>>q;
    while (q--)
    {
        int x,v;cin>>x>>v;
        if(x==0){
          INsert(head,tail,v);
        }else{
           INset_list(head,tail,v);
        }
        printsk(head,tail);
    }
     
     return 0;
}