#include<bits/stdc++.h>
using namespace std;
int main()
{
     stack<int>st;
     for(int i=0;i<5;i++){
        int val;cin>>val;
      st.push(val);
     }
     while (!st.empty())
     {
        cout<<st.top()<<endl;
        st.pop();
     }
     
     return 0;
}