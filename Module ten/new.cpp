#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node* Prev;
   Node(int val){
    this->val=val;
      next=NULL;
      Prev=NULL;
   }
};
void print_normal(Node *head){
   Node *tmp=head;
    while (tmp !=NULL)
     {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
     }
}
void dubbly_revers(Node *&head,Node *&tail){
        Node *i=head;
        Node *j=tail;
        while (i !=j && i->next !=j)
        {
          swap(i->val,j->val);
          i=i->next;
          j=j->Prev;
        }
        swap(i->val,j->val);
}
int main()
{   
    Node *head= new Node(10);
     Node *a=new Node(20);
     Node *b=new Node(30);
     Node *c=new Node(40);
     Node *tail=new Node(50);

     head->next=a;
     a->Prev=head;
     a->next=b;
     b->Prev=a;
     b->next=c;
     c->Prev=b;
     c->next=tail;
     tail->Prev=c;

      dubbly_revers(head,tail);
     print_normal(head);

     
     return 0;
}