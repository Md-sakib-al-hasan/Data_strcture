#include<bits/stdc++.h>
using namespace std;
int main()
{   
     string sen;
     getline(cin,sen);
     string world;
     stringstream ss(sen);
     map<string,int>mp;
     while (ss>>world)
     {
        mp[world]++;
     }
     cout<<mp["ah"]<<endl;     
     return 0;
}