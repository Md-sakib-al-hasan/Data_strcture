#include<bits/stdc++.h>
using namespace std;
int main()
{
     int v[5]={1,2,3,4,5};
     cout<<"Enter your se";
     int se;cin>>se;
     int l=0;
     int r=5-1;
     
     int f=1;
     while (l<=r)
     {
        int mad=l+r/2;
        if(v[mad]==se){
            cout<<"found"<<endl;
            f=0;
            break;
        }else{
            if(se>v[mad]){
                l=mad+1;
            }else{
                r=mad-1;
            }
        }
     }
     if(f==1){
        cout<<"NOt";
     }
     return 0;
}