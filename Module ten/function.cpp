#include<bits/stdc++.h>
using namespace std;
int main()
{    vector<int>v ={12,3,4,45,77,444,};
     int arr[10]={1,2,3,4,5,67,8,9,0};
     list<int>sk ={1,2,3,43,3};
     list<int>newlist;
    //  newlist=sk;
    newlist.assign(sk.begin(),sk.end());
    newlist.push_back(77);
    newlist.push_front(33);
    newlist.pop_back();
    newlist.pop_front();
    newlist.insert(next(newlist.begin(),3),12);
    newlist.insert(next(newlist.begin(),2),arr,arr+10);
    newlist.insert(next(newlist.begin(),2),{12,3,4,5,6,7,8,9,0});
    newlist.erase(next(newlist.begin(),7),next(newlist.begin(),10));
    replace(newlist.begin(),newlist.end(),0,100);

    auto it = find(newlist.begin(),newlist.end(),777777);
    if(it == newlist.end()){
        cout<<"NOt Found"<<endl;
    }
     cout<< *it<<endl;
     for(int val:newlist){
        cout<<val<<endl;
     }

     return 0;
}