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
void Insert_sort(Node * &head ){
     for(Node * i=head;i->next !=NULL;i=i->next){
        for(Node * j=i->next;j !=NULL;j=j->next){
            if(i->val< j->val){
                swap(i->val,j->val);
            }
        }
     }
}
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
   INser_input(head,tail);
    Insert_sort(head);
    int ha= sizsk(head);
    if(ha%2==0){
         Node * tmp=head;
        for(int i=1;i<ha/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }else{
        Node * tmp=head;
        for(int i=0;i<ha/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }

   
     return 0;
}