#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node *prev;
   Node(int val){
    this->val=val;
      next=NULL;
      prev=NULL;
   }
};
int sizes(Node * head){
     Node * tmp=head;
     int count=0;
     while (tmp !=NULL)
     {
          count++;
          tmp=tmp->next;
     }
     return count ;
}
void print_revers(Node *tail){
   Node *tmp=tail;
   cout<<"R -> ";
   while (tmp != NULL)
   {
     cout<<tmp->val<<" ";
    tmp=tmp->prev;
   }
   cout<<endl;
}
void print_normal(Node *head){
       Node *tmp=head;
       cout<<"L -> ";
       while (tmp != NULL)
       {
        cout<<tmp->val<<" ";
           tmp=tmp->next;
       }
       cout<<endl;
 }
 void Insert_head(Node *&head,Node *&tail,int va){
     Node * newnode = new Node(va);
     if(head == NULL){
          head=newnode;
          tail=newnode;
          return;
     }
     head->prev=newnode;
     newnode->next=head;
     head=newnode;
 }
 void Insert_dubble(Node * &head,Node * &tail,int va){
     Node * newnode = new Node(va);
     if(head==NULL){
          head=newnode;
          tail=newnode;
          return;
     }
     tail->next=newnode;
     newnode->prev=tail;
     tail=newnode;
}
void Insert_any_position(Node *&head,Node *&tail,int po,int va){
      Node * newnode =new Node(va);
      Node *tmp=head;
      for(int i=1;i<po;i++){
          tmp=tmp->next;
          if(tmp  == NULL){
               cout<<"Invalid"<<endl;
               return;
          }
      }
      if(tmp->next == NULL){
          cout<<"Invalid"<<endl;
      }
      newnode->next=tmp->next;
      tmp->next->prev=newnode;
      tmp->next=newnode;
      newnode->prev=tmp;
 }
int main()
{   Node *head=NULL;
    Node *tail=NULL;
    int qu;cin>>qu;

    while (qu--)
    {
     int val,x;cin>>x>>val;
     bool flag=true;
      if(x==0){
        Insert_head(head,tail,val);

      }else if(sizes(head)==x){
           Insert_dubble(head,tail,val);
      }else if(x<sizes(head)){
          Insert_any_position(head,tail,x,val);
      }else{
          cout<<"Invalid"<<endl;
          flag=false;
      }
      if(flag== true){
     print_normal(head);
     print_revers(tail);
      }
    }


     return 0;
}
