#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int>v ={1,1,2,3,5,5,6,7,};
     //v.remove(3);
     v.sort();
     v.sort(greater<int>());
     v.unique();
     v.reverse();
     for(int val:v){
        cout<<val<<endl;
     }
     cout<<*next(v.begin(),1);
     return 0;
}