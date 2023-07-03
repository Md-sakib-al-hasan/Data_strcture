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
class myQueue{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int siz=0;
    void push(int val){
      siz++;
      Node *newnode = new Node(val);
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
        siz--;
        Node *del=head;
        head=head->next;
        if(head == NULL){
           tail=NULL;
        }else{
          head->prev=NULL;
        }
       
        delete del;
    }
    int size(){
        return siz;
    }
    int fornt(){
        return head->val;
    }
    bool empty(){
        if(size()== 0) return true;
        else false;
    }
};
int main()
{   myQueue q;
for(int i=0;i<3;i++){
    int val;cin>>val;
    q.push(val);
}
while (!q.empty())
{
    cout<<q.fornt()<<endl;
    q.pop();
}

     return 0;
}