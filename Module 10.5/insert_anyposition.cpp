#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node * prev;
   Node(int val){
    this->val=val;
      next=NULL;
      prev=NULL;
   }
};
int sizes(Node *head){
       Node *tmp=head;
       int count=0;
       while (tmp !=NULL)
       {
          count++;
          tmp=tmp->next;
       }
       return count;
}
void input_tail_duble(Node *&head,Node *&tail,int val){
      Node *newnode = new Node(val);
      if(head==NULL){
        head=newnode;
        tail=newnode;
        return ;
      }
      tail->next=newnode;
      newnode->prev=tail;
      tail=newnode;
}
void input_multiple_dubble(Node *&head,Node *&tail){
    while (true)
    {   int val;cin>>val;
        if(val==-1){
            break;
        }else{
            input_tail_duble(head,tail,val);
        }
    }
    
}
void print_normal(Node *head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{     Node *head= NULL;
     Node *tail=NULL;
     Node *head1=NULL;
     Node *tail1=NULL;
     input_multiple_dubble(head,tail);
     int h1=sizes(head);
     
     return 0;
}