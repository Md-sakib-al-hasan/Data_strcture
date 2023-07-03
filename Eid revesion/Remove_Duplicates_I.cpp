<<<<<<< HEAD
 #include<bits/stdc++.h>
 using namespace std;
 class Node {
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
 };
 void delet_dubbly_val(Node *head){
          Node *tmp=head;
          while (tmp->next !=NULL)
          {
            if(tmp->val == tmp->next->val){
                Node *newdel=tmp->next;
                tmp->next=tmp->next->next;
            }
            if(tmp->next == NULL) break;
            else if (tmp->val != tmp->next->val)
            {
                tmp=tmp->next;
            }
            
          }
          
 }
 void print_singly(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
 }
 void sort(Node *head){
    for(Node *i=head;i->next!= NULL;i=i->next){
        for(Node *j=i->next; j !=NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
 }
 void input_tail(Node *&head,Node *&tail,int val){
           Node *newnode = new Node (val);
           if(head ==NULL){
            head=newnode;
            tail=newnode;
           }
           tail->next=newnode;
           tail=newnode;
 }
 void MUltiple_input(Node *&head,Node *&tail){
     while (true)
     {  int val;cin>>val;
        if(val== -1){
            break;
        }else{
            input_tail(head,tail,val);
        }
     }
     
 }
 int main()
 {
      Node *head= NULL;
      Node *tail=NULL;
      MUltiple_input(head,tail);
      sort(head);
     delet_dubbly_val(head);
     print_singly(head);

      return 0;
=======
 #include<bits/stdc++.h>
 using namespace std;
 class Node {
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
 };
 void delet_dubbly_val(Node *head){
          Node *tmp=head;
          while (tmp->next !=NULL)
          {
            if(tmp->val == tmp->next->val){
                Node *newdel=tmp->next;
                tmp->next=tmp->next->next;
            }
            if(tmp->next == NULL) break;
            else if (tmp->val != tmp->next->val)
            {
                tmp=tmp->next;
            }
            
          }
          
 }
 void print_singly(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
 }
 void sort(Node *head){
    for(Node *i=head;i->next!= NULL;i=i->next){
        for(Node *j=i->next; j !=NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
 }
 void input_tail(Node *&head,Node *&tail,int val){
           Node *newnode = new Node (val);
           if(head ==NULL){
            head=newnode;
            tail=newnode;
           }
           tail->next=newnode;
           tail=newnode;
 }
 void MUltiple_input(Node *&head,Node *&tail){
     while (true)
     {  int val;cin>>val;
        if(val== -1){
            break;
        }else{
            input_tail(head,tail,val);
        }
     }
     
 }
 int main()
 {
      Node *head= NULL;
      Node *tail=NULL;
      MUltiple_input(head,tail);
      sort(head);
     delet_dubbly_val(head);
     print_singly(head);

      return 0;
>>>>>>> cf2e555c13bd8374be33dfee556d941c78230486
 }