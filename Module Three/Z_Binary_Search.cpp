#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;cin>>a>>b;
     int arr[a];
     for(int i=0;i<a;i++){
      cin>>arr[i];
     }
     sort(arr,arr+a);
  
     while (b--)
     {
        int c;
        cin>>c;
           int l=0;
          int r=a-1;
        bool flag=false;
        while (l<=r)
        {
           int mid=(l+r)/2;
           if(arr[mid]==c){
               flag=true;
               break;
           }else
           {
            if(arr[mid]<c){
              l=mid+1;
            }else{
              r=mid-1;
            }
           }
           
        }
        if(flag== true){
          cout<<"found"<<endl;
        }else
        {
          cout<<"not found"<<endl;
        }
        
        
     }
     
     return 0;
}