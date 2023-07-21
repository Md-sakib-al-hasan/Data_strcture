#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string n,int r,int m){
         name=n;
         roll=r;
         marks=m;
    }
};
class com{
    public:
    bool operator()(Student a,Student b){
        if(a.marks<b.marks){
           return true;
        }else if (a.marks>b.marks){
            return false;
        }else
        {
             if(a.roll>b.roll){
                return true;
             }else{
                return false;
             }
        }

    }
};
int main()
{  priority_queue<Student,vector<Student>,com>pq;
   int in;cin>>in;
   while (in--)
   {
      string name; int roll;int marks;
      cin>>name>>roll>>marks;
      Student obj(name,roll,marks);
      pq.push(obj);
   }

int qu;cin>>qu;
while (qu--)
{
    int con;cin>>con;
    if(con==0){
        string name;
        int roll,marks;
       cin>>name>>roll>>marks;
       Student obj(name,roll,marks);
       pq.push(obj);
    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    }else if (con==1)
    {
        if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }else{
            cout<<"Empty"<<endl;
        }
    }else if (con==2)
    {
        if(!pq.empty()){
          pq.pop();
          if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
          }else{
            cout<<"Empty"<<endl;
          }
        }else{
            cout<<"Empty"<<endl;
        }
    }


}



     return 0;
}
