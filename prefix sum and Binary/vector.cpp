#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[50]={1,2,3,4,5};
     vector<int>v(arr,arr+50);
     
     cout<<v.max_size()<<endl;
     cout<<v.capacity()<<endl;
      v.clear();
      v.resize(100);
    cout<<v.size()<<endl;
     return 0;
}