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
     tail->next=a;
    Node *slow=head;
    Node *fast=head;
    bool flag= false;
    while (fast !=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            cout<<"found"<<endl;
           
            flag=true;
             break;
        }else{
            flag=false;
        }
    }
    
    if(flag== false){
        cout<<"not found"<<endl;
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
     tail->next=a;
    Node *slow=head;
    Node *fast=head;
    bool flag= false;
    while (fast !=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            cout<<"found"<<endl;
           
            flag=true;
             break;
        }else{
            flag=false;
        }
    }
    
    if(flag== false){
        cout<<"not found"<<endl;
    } 
     return 0;
>>>>>>> cf2e555c13bd8374be33dfee556d941c78230486
}