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
 int sizsk(Node *head){
    Node *tmp=head;
    int count=0;
    while (tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
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
void INser_input(Node * &head,Node *&tail){
         while (true)
         {   int op;cin>>op;
            if(op==-1){
                break;
            }else{
               INset_list(head,tail,op);
            }
         }
         
}
int main()
{     
    Node *head=NULL;
    Node *tail=NULL;
    Node *head1=NULL;
    Node *tail1=NULL;
   INser_input(head,tail);
   INser_input(head1,tail1);
   int flag=0;
    if(sizsk(head1)==sizsk(head)){
        Node *tmp=head;
        Node *tmp1=head1;
        while (tmp !=NULL)
        {
            if(tmp->val==tmp1->val){
                tmp=tmp->next;
                tmp1=tmp1->next;
                flag=1;
            }else{
                
                flag=0;
                break;
            }
        }

        
    }else{
        flag=0;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
     return 0;
}