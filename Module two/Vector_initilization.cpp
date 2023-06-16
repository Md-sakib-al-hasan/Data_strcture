#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>v1(10,200);
     int ar[5]={1,2,3,4,5};
     vector<int>v(ar,ar+5);

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     cout<<v.size()<<endl;
     return 0;
}