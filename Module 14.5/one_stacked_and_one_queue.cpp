#include<bits/stdc++.h>
using namespace std;
int main()
{   stack<int>st;
    queue<int>q;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        st.push(val);
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int val;cin>>val;
        q.push(val);
    }
    bool flag=true;
    if(st.size() == q.size()){
        while (! st.empty())
        {
            if(st.top() == q.front()){
               st.pop();
               q.pop();
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