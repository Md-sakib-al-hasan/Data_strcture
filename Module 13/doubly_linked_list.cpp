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
class myStack{
      public:
      Node *head=NULL;
      Node * tail=NULL;
      int sz=0;
      void push(int val ){
        sz++;
         Node *newnode= new Node(val);
        if(head == NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    
      }
      void pop(){
        sz--;
        Node *delet =tail;
        tail=tail->prev;
        if(tail == NULL ) head== NULL;
        else tail->next=NULL; 
        delete delet;

      }
      int top(){
        return tail->val;
      }
      int size(){
          return sz;
      }

      bool empty(){
        if(sz== 0) return true;
        else return false;
      }
};
int main()
{   myStack st;
   for(int i=0;i<5;i++){
    int val;cin>>val;
      st.push(val);
   } 
   while (st.empty() == false)
   {
     cout<<st.top()<<endl;
     st.pop();

   }
   
     
     return 0;
}