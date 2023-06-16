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


// for tail inset//
void Insert_taller(Node *&head,int val){
   Node *newnode= new Node(val);
   if(head == NULL){
     head=newnode;
     return ;
   }
   Node* tmp=head;
   while (tmp->next != NULL){
       tmp=tmp->next;
   }
   tmp->next=newnode;
}
// for tail ind



 void Insert_head(Node *&head,int val){
   Node * newnode = new Node(val);
     newnode->next=head;
     head=newnode;
 }


 void INsert_Print(Node *head){
        Node *tmp = head;
        while (tmp !=NULL)
        {
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
        cout<<endl;
 }




int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<"Enter 1 for inset tail postition"<<endl;
        cout<<"Enter 2 for inset haead postion"<<endl;
        cout<<"Enter 3 for break"<<endl;
        cout<<"Enter for prnt"<<endl;
        int op;cin>>op;
        if(op==1){
            int val;cin>>val;
            Insert_taller(head,val);
        }else if (op==2)
        {    int val;cin>>val;
            Insert_head(head,val);
        }else if (op==4)
        {
            INsert_Print(head);
        }
        
        else{
            break;
        }
        
    }
     
     return 0;
}