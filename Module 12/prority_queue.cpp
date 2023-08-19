#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue<int,vector<int>,greater<>>pq;
     while (true)
     {  int con;cin>>con;
        if(con==0){
            int val;cin>>val;
            pq.push(val);
            
        }else if (con==1)
        {
            pq.pop();
        }else if (con==2)
        {
         cout<<pq.top()<<endl;
        }else{
            break;
        }
        
        
     }
     
     return 0;
}