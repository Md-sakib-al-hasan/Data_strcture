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
void sk(Node *&head,int v){
    
   if(head==NULL){
      Node *newhead=new Node(v);
        head =newhead;
   }else{
     Node *newhead=new Node(v);
      Node *tmp=head;
      while (tmp->next != NULL)
      {
         tmp=tmp->next;
      }
      tmp->next=newhead;
      
   }
}
 void man( Node *&head ,int v){
   Node *windo= new Node(v);
   windo->next=head;
   head=windo;
 }
 void delet1(Node *head,int po){
   Node * tmp=head;
    for(int i=1;i<po-1;i++){
         tmp=tmp->next;
    }
    Node *dele=tmp->next;
    tmp->next=tmp->next->next;
    delete  dele;
 }
 void delet2(Node *&head){
   Node * dle= head;
   head=head->next;
   delete dle;
 }
void Print_link_list(Node * head){
     Node * tmp=head;
     while (tmp != NULL)
     {
          cout<<tmp->val<<endl;
          tmp=tmp->next;
     }
     
}
int main()    
{  
     Node *head=NULL;
     while (true)
     {
      cout<<"inset one for insert"<<endl;
      cout<<"inset two for Link_list"<<endl; 
     cout<<"inset Three for break"<<endl;
      int op;
     cin>>op;
     if(op==1){
         int v;
         cin>>v;
         sk(head,v);
     }else if (op==2)
     {
       Print_link_list(head);
     }else if (op==3)
     {
      break;
     }else if (op==4)
     {
        int v;
        cin>>v;
        man(head ,v);
     }else if (op==5)
     {   int po;cin>>po;
         delet1(head,po);
     }else if (op==6)
     {
        delet2(head);
     }
     
     
     
     
     
     }
     
    

     return 0;
}