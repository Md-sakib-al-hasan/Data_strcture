#include<bits/stdc++.h>
using namespace std;
class myStacked{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
       return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
class myStacke{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
       return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

int main()
{   
     myStacke st;
     myStacked sd;
     int n;cin>>n;
     for(int i=0;i<n;i++){
        int val;cin>>val;
           st.push(val);  
     }
      int m;cin>>m;
     for(int i=0;i<m;i++){
        int val;cin>>val;
           sd.push(val);  
     }
     bool flag= true;
     if(st.size() == sd.size()){
        while (! st.empty())
        {
            if(st.top() == sd.top()){
                st.pop();
                sd.pop();
            }else{
                flag=false;
                break;
            }
        }
        
     }else{
        flag=false;
     }
     if(flag == true){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

     return 0;
}