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
void sk(Node *&head ,Node *&tail,int val){
    Node * newnode = new Node(val);
    if(head ==NULL){
        head=newnode;
        tail=newnode;
        tail->next=head;
        return ;
    }
     tail->next=newnode;
     newnode->next=head;
     tail=newnode;

}
int main()

{    Node *head=NULL;
     Node *tail=NULL;
     sk(head,tail,10);
     sk(head,tail,40);
     sk(head,tail,50);
     sk(head,tail,60);
     sk(head,tail,70);
     Node *slow=head;
     Node *fast=head;
    bool flag=false;
    while (fast != NULL && fast->next!=NULL)
    {    slow=slow->next;
         fast=fast->next->next;
        if(slow == fast){
            flag=true;
            break;
        }
    }
    if(flag== true){
        cout<<"found"<<endl;
    }else{
        cout<<"not foudn"<<endl;
    }
     return 0;
}