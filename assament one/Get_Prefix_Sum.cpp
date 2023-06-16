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
    long long int arr1[a];
    arr1[0]=arr[0];
    for(int i=1;i<a;i++){
        arr1[i]=arr[i]+arr1[i-1];
    }
    for(int i=a-1;0<=i;i--){
          cout<<arr1[i]<<" ";
    }
     return 0;
}