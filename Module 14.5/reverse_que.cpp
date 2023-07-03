#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<int>q;
     stack<int>st;
     queue<int>newq;
      int n;cin>>n;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        q.push(val);
    }
    while(! q.empty()){
        st.push(q.front());
        q.pop();
    }
    while (! st.empty())
    {
        newq.push(st.top());
        st.pop();
    }
    while (! newq.empty())
    {
        cout<<newq.front()<<endl;
        newq.pop();
    }
    
    
     return 0;
}