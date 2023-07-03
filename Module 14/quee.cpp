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
void tail_input(Node *&head,Node *&tail,int val){

    Node *newnode = new Node (val);
            if (head ==NULL ){
                head=newnode;
                tail=newnode;
                return ;
            }
                tail->next=newnode;
                tail=newnode;
                
        
}
int mulit_inplemet(Node *&head,Node *&tail){
    int count=0;
     while (true)
     {  int val;cin>>val;
        if(val == -1){
            break;
        }else{
            Node *newnode = new Node (val);
            if (head ==NULL ){
                head=newnode;
                tail=newnode;
                count++;
            }else{
                tail->next=newnode;
                tail=newnode;
                count++;
            }
        }
     }
   return count;  
}
class myQueue{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;
    int mul(){
    int size= mulit_inplemet(head,tail);
    }
    int fornt(){
       return head->val;
    }
    void push(int val){
        size++;
       tail_input(head,tail,val);
       
    }
    void pop(){
        size--;
        Node *dle=head;
        head=head->next;
        if(head == NULL){
            tail=NULL;
        }
        delete dle;
       
    }
    int sizes(){
        return size;
    }
    bool empty(){
        if(sizes()== 0)return true;
        else false;
    }

};
int main()
{    myQueue st;
    for(int i=0;i<3;i++){
        int val;cin>>val;
        st.push(val);
    }
    while (!st.empty())
    {   
        cout<<st.fornt()<<endl;
        st.pop();
    }
    
     return 0;
}
