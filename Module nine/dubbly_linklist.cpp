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
 void print_normal(Node *head){
       Node *tmp=head;
       while (tmp != NULL)
       {
           cout<<tmp->val<<" ";
           tmp=tmp->next;
       }
       
 }
void print_revers(Node *tail){
   Node *tmp=tail;
   while (tmp != NULL)
   {
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
   }
   
}
int main()
{   
    Node *head = new Node(10);
    Node *a = new Node(12);
    Node *b = new Node(14);
    Node *tail = new Node(20);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;
    print_normal(head);
    cout<<endl;
    print_revers(tail);
    
     return 0;
}