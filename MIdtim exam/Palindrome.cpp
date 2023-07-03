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
void reverse(Node *&head1,Node *cur){
      if(cur->next ==NULL ){
        head1=cur;
        return;
      }
      reverse(head1,cur->next);
      cur->next->next=cur;
      cur->next=NULL;
}
void printsk(Node * head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
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
{    Node * head=NULL;
    Node * tail=NULL;
    Node * head1=NULL;
    Node * tail1 =NULL;
    input_multible(head,tail);
    Node * tmp=head;
    Node * tmp1=head1;
    while (tmp != NULL)
    {
         tail_input(head1,tail1,tmp->val);
         tmp=tmp->next;
    }
    reverse(head,head);
    tmp=head;
     tmp1=head1;
    bool flag=true;
     while (tmp1 != NULL)
     {
        if(tmp->val == tmp1->val){
            tmp=tmp->next;
            tmp1=tmp1->next;
        }else{
            flag=false;
            break;
        }
     }
     
   if(flag == true){
    cout<<"YES"<<endl;
   } else{
    cout<<"NO"<<endl;
   }

     
     return 0;
}