#include<bits/stdc++.h>
using namespace std;
int main()
{   list<string>l;
    while (true)
    {   string val;
       cin>>val;
        if(val == "end"){
            break;
        }else{
            l.push_back(val);
        }
    }
  int que;cin>>que;
 list<string>:: iterator it;
 list<string>:: iterator its;
  while (que--)
  {
      string web;cin>>web;
      if(web == "visit"){
            cin>>web;
            its = find(l.begin(),l.end(),web);

          if(its != l.end() ){
              it=its;
              cout<<*it<<endl;
          }else{
           cout<<"Not Available"<<endl;
          }
      }else if (web == "prev")
      {
        if(it == l.begin()){
          cout<<"Not Available"<<endl;
        }else{
            cout<<*--it<<endl;
            it=it--;
        }
      }else if (web == "next")
      {
           auto i=l.end();
         if(it == --i ){
            cout<<"Not Available"<<endl;
         }else{
            cout<<*++it<<endl;
            it=it++;
         }
      }

  }


     return 0;
}
