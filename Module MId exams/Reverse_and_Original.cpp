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
 void revers1(Node *head){
    Node *tmp=head;
    if(tmp == NULL){
        return;
    }
    revers1(tmp->next);
    cout<<tmp->val<<" ";
 }

 void revers2(Node *head){
    Node *tmp=head;
    if(tmp == NULL){
        return;
    }
     cout<<tmp->val<<" ";
    revers2(tmp->next);
   
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
int main()
{
    Node *head =NULL;
    Node *tail=NULL;
    while (true)
    { 
         int op;
         cin>>op;
        if(op==-1){
            break;
        }else{
            INset_list(head,tail,op);
        }
    }
     revers1(head);
     cout<<endl;
     revers2(head);
     return 0;
}