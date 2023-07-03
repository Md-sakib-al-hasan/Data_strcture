<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int>l;
     while (true)
     {
        int val;cin>>val;
        if(val ==-1) break;
        else{
            l.push_back(val);
        }
     }
     l.sort();
     l.unique();
     for(int val:l){
        cout<<val<<" ";
     }
     
     return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int>l;
     while (true)
     {
        int val;cin>>val;
        if(val ==-1) break;
        else{
            l.push_back(val);
        }
     }
     l.sort();
     l.unique();
     for(int val:l){
        cout<<val<<" ";
     }
     
     return 0;
>>>>>>> cf2e555c13bd8374be33dfee556d941c78230486
}