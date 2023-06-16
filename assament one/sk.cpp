#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int n=0;
    int m=a-1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(n==m && i==j){
                cout<<"x";
            }else if(m==j){
                cout<<"/";
            }else if (n==j)
            {
                cout<<"\\";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        n++;
        m--;

    } 
     return 0;
}