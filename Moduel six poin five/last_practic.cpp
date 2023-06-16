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
    cout<<"hello"<<endl;
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
  Node *tmp=head;
  int count=0;
  while (tmp->next != NULL)
  {   
    if(tmp->val < tmp->next->val){
          tmp=tmp->next;
          count=1;
    }else{
        cout<<"No"<<endl;
        count=0;
        break;
    }
  }
  if(count==1){
    cout<<"YEs"<<endl;
  }


     return 0;
}