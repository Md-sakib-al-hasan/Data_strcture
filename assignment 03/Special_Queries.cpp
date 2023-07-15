#include<bits/stdc++.h>
using namespace std;
int main()
{    queue<string>q;
    int qu;cin>>qu;
    while (qu--)
    {
        int mix;
        cin>>mix;
        if(mix==0){
            string val;
            cin>>val;
          q.push(val);
        }else{
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }else{
            cout<<q.front()<<endl;
            q.pop();
            }
        }

    }
    
     
     return 0;
}