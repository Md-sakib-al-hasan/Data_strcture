#include<bits/stdc++.h>
using namespace std;
int main()
{ list<int>l;

while (true)
{   int val;cin>>val;
    if(val== -1){
        break;
    }else{
         l.push_back(val);
    }
}
l.sort();
l.unique();
for(int val:l){
    cout<<val<<" ";
}
     return 0;
}