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
void max_val(Node *head){
   Node *tmp = head;
   int max=INT_MIN;
   while (tmp != NULL)
   {
      if(tmp->val >max){
        max=tmp->val;
      }
      tmp=tmp->next;
   }
   cout<<max<<" ";
}

void min_valk(Node *head){
     Node * tmp=head;
     int min=INT_MAX;
     while (tmp != NULL)
     {
        if(tmp->val < min){
            min=tmp->val;
        }
        tmp=tmp->next;
     }
       cout<<min<<endl;
     
}
void printf(Node *head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
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
     max_val(head);
     min_valk(head);
     return 0;
}