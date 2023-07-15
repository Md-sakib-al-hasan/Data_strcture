#include<bits/stdc++.h>
using namespace std;
int main()
{  stack<int>st;
   queue<int>q;
   int N,M;
   cin>>N>>M;
   if(N !=M){
    cout<<"NO"<<endl;
   }else{
    while (N--)
    {   int val;
        cin>>val;
         st.push(val);
    }
    while (M--)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    if(st.empty()== true && q.empty()== true){
        cout<<"YES"<<endl;
    }else{
        int f=1;
        while (! st.empty())
        {
              if(st.top()==q.front()){
                st.pop();
                q.pop();
              }else{
                f=0;
                cout<<"NO"<<endl;
                break;
              }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        
    }
    
   }
     
     return 0;
}