#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     vector<int>v;
     for(int i=0;i<a;i++){
        int sk;cin>>sk;
        v.push_back(sk);
     }
     vector<int>v1(a);
     v1[0]=v[0];
     for(int i=1;i<a;i++){
      v1[i]=v[i]+v1[i-1];
     }
     cout<<"Enter your po";
     int po,po1;cin>>po>>po1;
     if(po==1){
         cout<<v1[po1-1]<<" ";
     }else{
      cout<<v1[po1-1]-v[po-2]<<" ";
     }
     return 0;
}