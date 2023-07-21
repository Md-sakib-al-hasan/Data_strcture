  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
       priority_queue<long long int,vector<long long int>,greater<>>pq;
       int l;cin>>l;
       while (l--)
       {  long long int val;cin>>val;
          pq.push(val);
       }
        int q;cin>>q;
        while (q--)
        {
             int con;cin>>con;
             if(con==0){

                 long long int val;cin>>val;
                 pq.push(val);
                 cout<<pq.top()<<endl;
             }else if (con==1)
             {  if(! pq.empty()){
                cout<<pq.top()<<endl;
             }else{
               cout<<"Empty"<<endl;
             }
             }else if(con==2)
             {

                if(! pq.empty()){

                   pq.pop();
                 if(! pq.empty()){
                    cout<<pq.top()<<endl;
                 }else{
                 cout<<"Empty"<<endl;
                 }

                }else{

                    cout<<"Empty"<<endl;
                }
             }


        }

       return 0;
  }
