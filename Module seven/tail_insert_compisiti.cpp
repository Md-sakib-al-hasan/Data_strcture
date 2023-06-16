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
void insert_tail(Node *&head ,Node *&tail,int val){
    Node * newnode = new Node(val);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

int main()
{   Node *head= NULL;
    Node *tail= NULL;

     insert_tail(head,tail,10);
     insert_tail(head,tail,10);
     insert_tail(head,tail,40);
     insert_tail(head,tail,10);
     Node * tmp=head;
     while (tmp != NULL)
     {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
     }
     cout<<endl;
     
     return 0;
}