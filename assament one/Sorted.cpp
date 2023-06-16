#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     while (a--)
     {
        int ind;
        cin>>ind;
        int ar[ind];
        for(int i=0;i<ind;i++){
            cin>>ar[i];
        }
         int ar1[ind];
         for(int i=0;i<ind;i++){
            ar1[i]=ar[i];
         }
         sort(ar1,ar1+ind);
         bool flag=false;
         for(int i=0;i<ind;i++){
            if(ar1[i] != ar[i]){
                flag=true;
                break;
            }
         }
         if(flag== true){
            cout<<"NO"<<endl;
         }else{
            cout<<"YES"<<endl;
         }
        
    
     }
     
     return 0;
}