<<<<<<< HEAD
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
int main()
{    Node *head= new Node (10);
    Node *a= new Node (20);
    Node *b= new Node (30);
    Node *c= new Node (40);
    Node *tail= new Node (50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    a->prev=head;
    b->prev=a;
    c->prev=b;
    tail->prev=c;
    Node *i=head;
    Node *j=tail;
    bool flag= false;
    while (j != i && i->next !=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
     return 0;
=======
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
int main()
{    Node *head= new Node (10);
    Node *a= new Node (20);
    Node *b= new Node (30);
    Node *c= new Node (40);
    Node *tail= new Node (50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=tail;
    a->prev=head;
    b->prev=a;
    c->prev=b;
    tail->prev=c;
    Node *i=head;
    Node *j=tail;
    bool flag= false;
    while (j != i && i->next !=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
     return 0;
>>>>>>> cf2e555c13bd8374be33dfee556d941c78230486
}