#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a;
        cin>>a;
        int ar[a];
        for(int i=0;i<a;i++){
            cin>>ar[i];
        }
        int count=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(ar[i]+1 == ar[j]){
                 count++;
                }
            }
        }
        cout<<count<<endl;
     return 0;
}