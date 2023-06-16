#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
void Insert_LINK(Node *&head,int va){
    Node *windo=new Node(va);
    if(head==NULL){
        head=windo;
    }else{
        Node *tmp=head;
        while (tmp->next !=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=windo;
        
    }
}
int main()
{   int va;
   Node *head=NULL;
  while (true)
  { cout<<"Enter your val"<<endl;
    cin>>va;
    if(va==-1){
        break;
    }else{
        Insert_LINK(head,va);
    }
  }
Node *  tmp=head;
int count=0;
  while (tmp !=NULL)
  {
    count++;
    tmp=tmp->next;
  }
  cout<<"Your value is = "<<count<<endl;
  
  
     
     return 0;
}