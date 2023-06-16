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
void  print_linked_list( Node *head){
      Node *tmp=head;
      while (tmp !=NULL)
      {
         cout<<tmp->val<<" ";
         tmp=tmp->next;
      }
      
}
void Insert_Link_list(Node * head,int po,int val){
     Node *newnode= new Node(val);
     Node *tmp=head;
     for(int i=1;i<po-1;i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<"Invalid"<<endl;
            return;
        }
     }
     newnode->next=tmp->next;
     tmp->next=newnode;
}
int main()
{  
    Node *head= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    Node *d= new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    Insert_Link_list(head,6,100);
    print_linked_list(head);
     
     return 0;
} 