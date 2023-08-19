#include<bits/stdc++.h>
using namespace std;
int main()
{
     string se;
     getline(cin,se);
     stringstream ss(se);
     string word;
     map<string,int>mp;
     int max=0;
     string an;
     while(ss>>word)
     {
        mp[word]++;
        if(mp[word]> max){
           max=mp[word];
           an=word;
        }
        
     }
     cout<<an<<" ";
     cout<<max<<endl;
    
     return 0;
}