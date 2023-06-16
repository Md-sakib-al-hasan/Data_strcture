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
void print1( Node *head){
    Node *tmp=head;
    while (tmp!=NULL)
    {
         cout<<tmp->val<<" ";
         tmp=tmp->next;

    }
    cout<<endl;
 }
void Insert_postition(Node *head ,int in,int v){
    Node * Windo= new Node(v);
    Node * tmp=head;
    for(int i=1;i<in;i++)
    {   tmp=tmp->next;
        if(tmp==NULL){
        cout<<"Invalid"<<endl;
        return  ;
              }
        
    }
    Windo->next=tmp->next;
    tmp->next=Windo;
      print1(head);
}
 

void Inset_haed(Node *&head,int in,int v){
      Node * wind= new Node(v);
       wind->next=head;
       head=wind;
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
  cout<<"Enter your Quarey"<<endl;
  int b;cin>>b;
  for(int i=0;i<b;i++){
    cout<<"Enter your indes and value"<<endl;
    int in,v;
    cin>>in>>v;
    if(in==0){
        Inset_haed(head, in, v);
    }else{
     Insert_postition(head ,in,v);
    }
  }
  
     
     return 0;
}