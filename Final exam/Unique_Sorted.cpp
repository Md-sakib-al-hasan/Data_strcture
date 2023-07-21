#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    while (te--)
    {    set<int>s;
         vector<int>v;
         int cou;cin>>cou;
         for(int i=0;i<cou;i++){
            int val;cin>>val;
            s.insert(val);
         }
         for(auto it=s.begin();it != s.end();it++){
            v.push_back(*it);
         }
         reverse(v.begin(),v.end());
         for(int c:v){
            cout<<c<<" ";
         }
         cout<<endl;
    }
    
     return 0;
}