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
void print_singly_reverse(Node *tail){
    Node *tmp=tail;
    cout<<"R ->"<<" ";
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
 }
void print_singly(Node *head){
    Node *tmp=head;
    cout<<"L ->"<<" ";
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
 }
int sizes (Node *head){
    Node *tmp=head;
    int count=0;
    while (tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_head(Node *&head,Node *&tail ,int val){

   Node *newnode = new Node (val);
   if(head== NULL){
    head=newnode;
    tail=newnode;
    return;
   }
   head->prev=newnode;
   newnode->next=head;
   head=newnode;  
}
void   inser_any_posittion(Node *head,int po,int val){
    Node *newnode =new Node (val);
     Node *tmp=head;
    for(int i=1;i<po;i++){
         tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    newnode->prev=tmp;
    tmp->next=newnode;
    
}
void insert_tail(Node *&tail,int v){
   Node *newnode =new Node(v);
   tail->next=newnode;
   newnode->prev=tail;
   tail=newnode;
}
        
int main()
{   Node *head=NULL;
   Node *tail=NULL;
   
        int Q;cin>>Q;
        while (Q--)
        {   
            int x,v;cin>>x>>v;
            int count=sizes(head);
            
            if(x == 0){
                
                insert_head(head,tail,v);
                print_singly(head);
                print_singly_reverse(tail);
            }else if (x<count)
            {
                inser_any_posittion(head,x,v);
                 print_singly(head);
                print_singly_reverse(tail);
            }else if (count == x)
            {
                insert_tail(tail,v);
                 print_singly(head);
                print_singly_reverse(tail);
            }else{
                cout<<"Invalid"<<endl;
            }
            

        }
    
     
     return 0;
}
