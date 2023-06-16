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
int arr[100]={0};
Node *tmp=head;
while (tmp != NULL)
{   int val=tmp->val;
    arr[val]++;
    tmp=tmp->next;
}
tmp=head;
bool fal=true;
for(int i=0;i<=100;i++){
    if(arr[i]==2){
        cout<<"Yes"<<endl;
        fal=false;
        break;
    }
}
if(fal==true){
    cout<<"NO"<<endl;
}


  
  
     
     return 0;
}