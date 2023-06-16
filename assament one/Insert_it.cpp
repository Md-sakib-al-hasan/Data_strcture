#include<bits/stdc++.h>
using namespace std;
int main()
{    int a;cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    int b;cin>>b;
    int arb[b];
    for(int i=0;i<b;i++){
        cin>>arb[i];
    }
    int x;cin>>x;
    int arr[a+b];
    int ina=0;
    int inb=0;
    for(int i=0;i<a+b;i++){
        if(x+(b-1)>=i && i>=x){
            arr[i]=arb[inb];
            inb++;
        }else{
            arr[i]=ar[ina];
             ina++;
             
        }
    }
    for(int i=0;i<a+b;i++){
        cout<<arr[i]<< " ";
    }
     return 0;
}