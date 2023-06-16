#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;
     cin>>a>>b;
     vector<int>v(a);
     vector<long long int>v1(a);
     for(int i=0;i<a;i++){
       cin>>v[i];
     }
     long long int sum=0;
     for(int i=0;i<a;i++){
          sum+=v[i];
          v1[i]=sum;
     }
     while (b--)
     {     int c,d;
          cin>>c>>d;
          if(c== 1 || c==0){
              cout<<v1[d-1]<<endl; 
          }else{
          cout<<v1[d-1]-v1[c-2]<<endl;
          }
     }
     
     return 0;
}