#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;cin>>a;
     int arr[a];
     for(int i=0;i<a;i++){
        cin>>arr[i];
     }
     int c,l,r;
     cin>>c;
     l=0;
     r=a-1;
     bool flag=false;
     while (l<=r)
     {
        int mid=(l+r)/2;
        if(arr[mid]==c){
           flag=true;
           break;
        }else{
            if(arr[mid]<c){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        
     }
     if(flag== true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
     
     return 0;
}