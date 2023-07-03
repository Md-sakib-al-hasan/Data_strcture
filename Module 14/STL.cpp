#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<int>q;
     for(int i=0;i<3;i++){
        int val;cin>>val;
        q.push(val);
     }
     while (!q.empty())
     {
        cout<<q.front()<<endl;
        q.pop();
     }
     

     return 0;
}