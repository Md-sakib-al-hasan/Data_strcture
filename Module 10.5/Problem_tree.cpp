#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node * prev;
   Node(int val){
    this->val=val;
      next=NULL;
      prev=NULL;
   }
};
int sizes(Node *head){
       Node *tmp=head;
       int count=0;
       while (tmp !=NULL)
       {
          count++;
          tmp=tmp->next;
       }
       return count;
}
void input_tail_duble(Node *&head,Node *&tail,int val){
      Node *newnode = new Node(val);
      if(head==NULL){
        head=newnode;
        tail=newnode;
        return ;
      }
      tail->next=newnode;
      newnode->prev=tail;
      tail=newnode;
}
void input_multiple_dubble(Node *&head,Node *&tail){
    while (true)
    {   int val;cin>>val;
        if(val==-1){
            break;
        }else{
            input_tail_duble(head,tail,val);
        }
    }
    
}
void prlindom(Node * head,Node *tail){
             Node *i=head;
             Node *j=tail;
             int f=1;
             bool flag1=false;
             while (i !=j && i->next != j)
             {
                if(i->val==j->val){
                   i=i->next;
                   j=j->prev;
                   flag1=true;
                }else{
                    f=0;
                    break;
                }
               
             }
             if(flag1 == true){
                if(i->val==j->val){
                    f=1;
                    
                }else{
                    f=0;
                }
             }
             
            if(f==1){
                cout<<"YES"<<" ";
            }else{
                cout<<"NO"<<" ";
            }
}
void print_normal(Node *head){
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{     Node *head= NULL;
     Node *tail=NULL;
     input_multiple_dubble(head,tail);
     prlindom(head,tail);
     
     return 0;
}