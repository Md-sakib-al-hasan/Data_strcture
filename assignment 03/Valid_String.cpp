#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int q;
  cin>>q;
  while (q--)
  { list<char>li; 
     string val;
     cin>>val;
     for(char c:val){
      if(li.empty()){
         li.push_back(c);
      }else{
      if(c!=li.back()){
         li.pop_back();
      }else{
         li.push_back(c);
      }
     }
    
   }
    if(li.empty()){
      cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;
     }
  }
     
     return 0;
}