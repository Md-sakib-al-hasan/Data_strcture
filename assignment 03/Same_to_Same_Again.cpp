#include<bits/stdc++.h>
using namespace std;
class Node {
     public:
     int val;
     Node *next;
     Node *prev;
     Node(int val){
          this->val=val;
          next=NULL;
     }
};
void push_stack(Node * &head,Node *&tail,int val){
  Node *newNode = new Node (val);
  if(head==NULL){
     head=newNode;
     tail=newNode;
     return ;
  }
   tail->next=newNode;
   newNode->prev=tail;
   tail=newNode;
}
void  Push_Queue(Node * &front,Node *&last,int val){
  Node *newNode = new Node (val);
  if(front==NULL){
     front=newNode;
     last=newNode;
     return ;
  }
   last->next=newNode;
   last=newNode;
}
void pop_stack(Node *&head,Node *&tail){
     if(tail == NULL || head == NULL){
          head=NULL;
          tail=NULL;
          return ;
     }
     if(tail == head){
        head=NULL;
        tail=NULL;
        return ;
     }
     Node *del=tail;
     tail=tail->prev;
     tail->next=NULL;
     delete del;

}
void pop_Queue(Node *&front,Node *&last){
  if(front->next ==NULL){
     front=NULL;
     last=NULL;
     return ;
  }
  Node *del=front;
  front=front->next;
  delete del;
}
int main()
{  Node *head=NULL;
  Node *tail=NULL;
  Node *front=NULL;
  Node *last=NULL;
  Node *list1=NULL;
  Node *listT1=NULL;
  Node *list2=NULL;
  Node *listT2=NULL;
  int N,M;
  cin>>N>>M;
  if(N != M){
     cout<<"NO"<<endl;
  }else{
     while (N--)
  {  int r;
     cin>>r;
     push_stack(head,tail,r);
  }
  
  while (M--)
  {  int R;
     cin>>R;
      Push_Queue(front,last,R);
  }

   if(head == NULL && front == NULL){
     cout<<"YES"<<endl;
   }else{
     
     while (head !=NULL)
     {    
          Push_Queue(list1,listT1,tail->val);
           pop_stack(head,tail);
           Push_Queue(list2,listT2,front->val);
            pop_Queue(front,last);
     }
     
     Node *tmp=list1;
     Node *tmp1=list2;
     int f=1;
     while (tmp !=NULL)
     {    
         if(tmp->val == tmp1->val){
          tmp=tmp->next;
          tmp1=tmp1->next;
           f=1;
         }else{
          f=0;
          cout<<"NO"<<endl;
          break;
         }

     }
     if(f==1){
          cout<<"YES"<<endl;
     }
     
   }
  }
  
  
 

     
     return 0;
}