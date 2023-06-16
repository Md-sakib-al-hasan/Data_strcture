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
void s1(Node * &head,int b){
    Node *node1= new Node(b);
    if(head==NULL){
        head=node1;
    }else{
        Node *tmp=head;
        while (tmp->next != NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=node1;
        
    }
}
void print1(Node * head){
    Node * tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{   Node *head=NULL;
  while (true)
  {
      cout<<" 1 for val insert"<<endl;
      cout<<" 2 for val see"<<endl;
      cout<<" 3 prgoram break"<<endl;
      int op;
      cin>>op;
      if(op==1){
        int b;
        cin>>b;
        s1(head,b);

      }else if(op==2){
        print1(head);
      }else if(op==3)
      {
        break;
      }
      
  }
  
     
     return 0;
}