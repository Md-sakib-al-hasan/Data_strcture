#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>mylist;
    // cout<<mylist.size()<<endl;

    list<int>mylist(10,77);
    // vector<int>v(10,7);
    // string s="sakib";
    // int arr[5]={3,3,4};
    // for(int val:arr){
    //     cout<<val<<endl;
    // }
    list<int>mylis(mylist);
    for(int val:mylis){
        cout<<val<<endl;
    }
     return 0;
}