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
void Delete_tail(Node *&tail){
       Node *deletenode =tail;
       tail->prev->next=NULL;
       tail=tail->prev;
       delete deletenode;
}
void  Delete_any_position(Node *head,Node *&tail,int po){
            Node *tmp=head;
            for(int i=1;i<po-1;i++){
               tmp=tmp->next;
               if(tmp->next == NULL){
                    cout<<endl;
                    cout<<"Invalid position"<<endl;
                    return ;
               }
            }
            if(tmp->next->next == NULL){
              Delete_tail(tail);
            return;
            }
           Node *deletenode=tmp->next;
          tmp->next->next->prev=tmp;
          tmp->next=tmp->next->next;
          delete deletenode;
 }
void Delete_head(Node *&head){
     Node *deletehead = head;
     head->next->prev=NULL;
     head=head->next;
     delete deletehead;

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
 void Insert_any_position(Node *head,Node *&tail,int po,int va){
      Node * newnode =new Node(va);
      Node *tmp=head;
      for(int i=1;i<po-1;i++){
          tmp=tmp->next;
          if(tmp->next == NULL){
               cout<<endl;
               cout<<"Invalid  positon"<<endl;
               return;
          }
      }
      if(tmp->next->next == NULL){
        Insert_dubble(head,tail,va);
        return ;
      }
      newnode->next=tmp->next;
      tmp->next->prev=newnode;
      tmp->next=newnode;
      newnode->prev=tmp;
      cout<<"INsert complite"<<endl;
 }


void Insert_link(Node *&head,Node *&tail){
      while (true)
     {    cout<<"Enter you value"<<endl;
          int va;cin>>va;
          if(va==-1){
               break;
          }else{
               Insert_dubble(head,tail,va);
          }
     }
     cout<<"Insert compilited"<<endl;
}
void print_revers(Node *tail){
   Node *tmp=tail;
   while (tmp != NULL)
   {
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
   }
   cout<<endl;
}
void print_normal(Node *head){
       Node *tmp=head;
       while (tmp != NULL)
       {
           cout<<tmp->val<<" ";
           tmp=tmp->next;
       }
       cout<<endl;
 }
int main()
{    Node *head=NULL;
     Node *tail=NULL;
     while (true)
     {
     cout<<" Enter 1 for inset moultiple dubbly list"<<endl;
     cout<<" Enter 2 for any position dubbly link list"<<endl;
     cout<<" Enter 3 for break link list"<<endl;
     cout<<" Enter 4 for insert head link list"<<endl;
     cout<<" Enter 5 for link list print"<<endl;
     cout<<" Enter 6 for Insert tail link list"<<endl;
     cout<<" Enter 7 for Delete tail link list"<<endl;
     cout<<" Enter 8 for Delete head link list"<<endl;
     cout<<" Enter 9 for Delete any position link list"<<endl;
     cout<<"Enter you option"<<endl;
     int op;cin>>op;
     if(op==1){
          Insert_link(head,tail);
     }else if (op==2)
     {    cout<<"Enter you postision"<<endl;
          int po;cin>>po;
          cout<<"Enter your value"<<endl;
          int va;cin>>va;
          if(po==1 || po== 0){
                 Insert_head(head,tail,va);
          }else{
               Insert_any_position(head,tail,po,va);

          }
     }else if (op==3)
     {
          break;
     }else if (op==4)
     {     cout<<"Enter you head value"<<endl;
            int va;cin>>va;
           Insert_head(head,tail,va);
     }else if (op==5)
     { 
        print_normal(head);
        cout<<"reverst print"<<endl;
        print_revers(tail);
     }else if (op==6)
     {    cout<<"Enter you tail"<<endl;
           int va;cin>>va;
          Insert_dubble(head,tail,va);
     }else if (op==7)
     {
          Delete_tail(tail);
     }else if (op==8)
     {
          Delete_head(head);
     }else if(op==9){
          cout<<"Enter you postion whic you want to delete"<<endl;
          int po;cin>>po;
          if(po==1 || po==0){
               Delete_head(head);
          }else{
           Delete_any_position(head,tail,po);
           }
     }
     
     
     
     
     
     
     
     
     }
     
   
     return 0;
}