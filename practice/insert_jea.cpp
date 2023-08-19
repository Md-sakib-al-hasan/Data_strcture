#include<bits/stdc++.h>
using namespace std;
int main()
{
       int a;cin>>a;
       int arr[]={5,2,1,3,4,6,7,9,11,10};
       int arrsiz=sizeof(arr)-1;
       arr[arrsiz]= a;
       cout<<arrsiz<<endl;
       
     return 0;
}