#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    list<int>l;
    void push(int val){
      l.push_back(val); 
    }
    void pop(){
       l.pop_front();
    }
    int size(){
        return l.size();
    }
    int fornt(){
        return l.front();
    }
    bool empty(){
        if(size()== 0) return true;
        else false;
    }
};
int main()
{   myQueue q;
for(int i=0;i<5;i++){
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