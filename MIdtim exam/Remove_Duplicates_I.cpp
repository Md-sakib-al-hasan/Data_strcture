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
void remove_dublicate(Node *head){
     Node *tmp=head;
    while (tmp->next !=NULL)
    {
        if(tmp->val == tmp->next->val){
            Node * deletenode = tmp->next;
            tmp->next=tmp->next->next;
            delete deletenode;
        }
        if(tmp->next == NULL) break;
        else if (tmp->val != tmp->next->val)
        {
            tmp=tmp->next;
        }
        
    }
    
}
void printsk(Node * head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void sort_singly(Node *head){
    for(Node * i=head;i->next != NULL;i=i->next){
        for(Node *j=i->next; j != NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void tail_input(Node *& head,Node *&tail,int val){
     Node * newnode = new Node (val);
     if(head== NULL){
        head=newnode;
        tail=newnode;
        return;
     }
     tail->next=newnode;
     tail=newnode;
     return;
}
void input_multible(Node *&head,Node *&tail){
    while (true)
    {   int val;cin>>val;
        if(val== -1 ){
            break;
        }else{
            tail_input(head,tail,val);
        }
    }
    
}
int main()
{   Node *head=NULL;
   Node *tail=NULL;
   input_multible(head,tail);
   sort_singly(head);
   remove_dublicate(head);
   printsk(head);
     
     return 0;
}