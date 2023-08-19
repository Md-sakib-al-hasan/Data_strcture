#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int markers;
    Student(string n,int r,int m){
        name=n;
        roll=r;
        markers=m;
    }
};
class com{
    public:
    bool operator()(Student a,Student b){
            if(a.roll>b.roll){
                return true;
            }else{
                return false;
            }
    }
};
int main()
{  int c;cin>>c;
   priority_queue<Student,vector<Student>,com>pq;
    for(int i=0;i<c;i++){
        string n;
        int r,m;
        cin>>n>>r>>m;
        Student job(n,r,m);
        pq.push(job);
    }
    while (! pq.empty())
    {
          cout << pq.top().name<<" "<<pq.top().markers<<" ";
         pq.pop();
         cout<<endl;
    }
    
     
     return 0;
}