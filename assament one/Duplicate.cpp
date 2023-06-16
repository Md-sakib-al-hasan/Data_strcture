#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     int arr[a];
     for(int i=0;i<a;i++){
        cin>>arr[i];
     }
     sort(arr,arr+a);
     bool flag=false;
     for(int i=0;i<a;i++){
           int l=0;
           int r=a-1;
           flag=false;
           while (l<=r)
           {
             int mid=(l+r)/2;
             if(arr[i] == arr[mid] && i!=mid){
                flag=true;
                break;
             }
             else{
                if(arr[i]> arr[mid]){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
             }
           }
           if(flag== true){
            cout<<"YES"<<endl;
            break;
           }
           
     }
     if(flag==false){
        cout<<"NO"<<endl;
     }
     return 0;
}