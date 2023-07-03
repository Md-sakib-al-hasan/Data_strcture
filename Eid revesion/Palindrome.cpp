<<<<<<< HEAD
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
void reverse(Node *&head,Node *cur){
    if(cur->next == NULL){
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
void print_singly(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
 }
 void input_tail(Node *&head,Node *&tail,int val){
           Node *newnode = new Node (val);
           if(head ==NULL){
            head=newnode;
            tail=newnode;
            return;
           }
           tail->next=newnode;
           tail=newnode;
 }
 void copy_val(Node *head,Node *&head1,Node *&tail1){
    Node *tmp=head;
   while (tmp !=NULL)
    {   input_tail(head1,tail1,tmp->val);
         tmp=tmp->next;
    }
    
}
 void MUltiple_input(Node *&head,Node *&tail){
     while (true)
     {  int val;cin>>val;
        if(val== -1){
            break;
        }else{
            input_tail(head,tail,val);
        }
     }
     
 }
 int main()
 {
      Node *head= NULL;
      Node *tail=NULL;
      Node *head1=NULL;
      Node *tail1=NULL;
      MUltiple_input(head,tail);
      copy_val(head,head1,tail1);
      int count1= sizes(head);
      reverse(head,head);
      Node *tmp=head1;
      Node* tmp1=head;
      bool flag=true;
      while (tmp !=NULL)
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
      }else{
        cout<<"NO"<<endl;
      }
     

      return 0;
=======
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
void reverse(Node *&head,Node *cur){
    if(cur->next == NULL){
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
void print_singly(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
 }
 void input_tail(Node *&head,Node *&tail,int val){
           Node *newnode = new Node (val);
           if(head ==NULL){
            head=newnode;
            tail=newnode;
            return;
           }
           tail->next=newnode;
           tail=newnode;
 }
 void copy_val(Node *head,Node *&head1,Node *&tail1){
    Node *tmp=head;
   while (tmp !=NULL)
    {   input_tail(head1,tail1,tmp->val);
         tmp=tmp->next;
    }
    
}
 void MUltiple_input(Node *&head,Node *&tail){
     while (true)
     {  int val;cin>>val;
        if(val== -1){
            break;
        }else{
            input_tail(head,tail,val);
        }
     }
     
 }
 int main()
 {
      Node *head= NULL;
      Node *tail=NULL;
      Node *head1=NULL;
      Node *tail1=NULL;
      MUltiple_input(head,tail);
      copy_val(head,head1,tail1);
      int count1= sizes(head);
      reverse(head,head);
      Node *tmp=head1;
      Node* tmp1=head;
      bool flag=true;
      while (tmp !=NULL)
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
      }else{
        cout<<"NO"<<endl;
      }
     

      return 0;
>>>>>>> cf2e555c13bd8374be33dfee556d941c78230486
 }