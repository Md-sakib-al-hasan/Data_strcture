#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int>mylist(10);
     cout<<mylist.size()<<endl;
     cout<<mylist.max_size()<<endl;
     mylist.clear();
     mylist.resize(20,10);
     cout<<mylist.size()<<endl;
     for(int val:mylist){
        cout<<val<<endl;
     }
     return 0;
}