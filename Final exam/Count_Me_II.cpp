// #include<bits/stdc++.h>
// using namespace std;
// int main()

// {   int te;cin>>te;
//     while (te--)
//     {
//     long long int arr[1000000000]={0};
//     long long int arr1[1000000000]={0};
//      long long int n;cin>>n;
//      long long int max_co=0;
//      long long int max_val=0;
//       for(int i=0;i<n;i++){
//       long long int val;cin>>val;
//         cout<<val<<endl;
//         if(val<0){
//             arr1[abs(val)]++;
//             if(arr1[abs(val)]>max_co){
//                 max_co=arr1[abs(val)];
//                 max_val=val;
//             }else if (arr1[abs(val)] == max_co && val> max_val )
//             {
//                 max_co=arr1[abs(val)];
//                 max_val=val;
//             }
//         }else{
//             arr[val]++;
//             if(arr[val]>max_co){
//                 max_co=arr[val];
//                 max_val=val;
//             }else if (arr[val] == max_co && val> max_val )
//             {
//                 max_co=arr[val];
//                 max_val=val;
//             }
//         }  
//       }
//       cout<<max_val<<" "<<max_co<<endl;
//     }
    
//      return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int te;cin>>te;
//      while (te--)
//      {
//         int n;cin>>n;
//      map<int,int>mp;
//      int max=0;
//      long long int an;
//      while (n--)
//      {
//         int val;cin>>val;
//           mp[val]++;
//           if(mp[val]>max){
//             max=mp[val];
//             an=val;
//           }
//           if(mp[val]== max && val>an){
//              max=mp[val];
//             an=val;
//           }
//      }
//      cout<<an<<" "<<max<<endl;
//      }
     

//      return 0;
// }





#include<bits/stdc++.h>
using namespace std;
int main()
{
     int te;cin>>te;
     while (te--)
     {
        int n;cin>>n;
     map<int,int>mp;
     int max=0;
     long long int an;
     while (n--)
     {
        int val;cin>>val;
          mp[val]++;
          if(mp[val]>max){
            max=mp[val];
            an=val;
          }
        //   if(mp[val]== max && val>an){
        //      max=mp[val];
        //     an=val;
        //   }
     }
     cout<<an<<" "<<max<<endl;
       for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second==max && an>){
          
        }
    }
    
     }
     return 0;
}