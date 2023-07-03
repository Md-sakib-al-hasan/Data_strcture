#include<bits/stdc++.h>
using namespace std;
class mystack {
      public:
      vector<int>v;
      void push(int val){
        v.push_back(val);
      }
      void pop(){
        v.pop_back();
      }
      int top(){
        return v.back();
      }
      bool emty(){
        if(v.size()== 0) return true;
        else return false;
      }
      int size(){
        return v.size();
      }
};
int main()
{    mystack st;
     for(int i=0;i<5;i++){
        int val;cin>>val;
        st.push(val);
     }
     while (st.emty() == false)
     {
         cout<<st.top()<<endl;
         st.pop();

     }
     
     
     return 0;
}