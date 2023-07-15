
#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int te;cin>>te;
    while (te--)
    { 
         queue<char>q,q1,q2;
        int inputSiz;cin>>inputSiz;
        for(int i=0;i<inputSiz;i++){
           char val;cin>>val;
           q.push(val);
        }
        if(inputSiz == '0'){
          cout<<endl;
          continue;
        }else if (inputSiz == '1')
        {
             cout<<q.front();
             continue;
        }else{
            for(int i=0;i<(inputSiz/2);i++)
            { 
             char str=q.front();
                q.pop();
                char str1=q.front();
                q.pop();
                if(str != str1){
                if(str == 'R'){
                    if(str1== 'G'){
                        q1.push('Y');
                    }else if(str1=='B'){
                        q1.push('P');
                    }
                }else if (str=='G')
                {
                    if(str1=='R'){
                        q1.push('Y');
                    }else if (str1 =='B')
                    {
                        q1.push('C');
                    }
                    
                }else if (str=='B')
                {
                    if(str1=='R'){
                        q1.push('P');
                    }else if (str1 =='G')
                    {
                        q1.push('C');
                    }
                }
                
                
                }
            }
            if(inputSiz%2==1){
                q1.push(q.front());
            }
        }  
        //   while (! q1.empty())
        //   {
        //      cout<<q1.front();
        //      q1.pop();
        //   }
          
        //second end and 3r start

        
        if(!q1.empty()){
            if(q1.size()== 1){
                cout<<q1.front()<<endl;
               continue;
            }else{  
                  int con=0;
                  int con1=0;
                  int sk=3;
                  while(con !=1){
                            int looping=q1.size()-1;
                        for(int i=0;i<looping;i++){
                            char sto=q1.front();
                            q1.pop();
                            char sto1=q1.front();
                            if(sto == sto1){
                                q1.pop();
                                i++;
                            }else{
                                q2.push(sto);
                            }
                            
                            }
                            if(!q1.empty()){
                        
                            q2.push(q1.front());
                            q1.pop();
                            
                            }

                      //q1 lode
                       con=0;
                       con1=0;
                      while (! q2.empty())
                      {  char a=q2.front();
                         q2.pop();
                         if(!q2.empty() && a==q2.front()){
                            q1.push(a);
                        
                            con1=1;
                         }else{
                           q1.push(a);
                        
                         }
                      } 
                      con=0;
                      if(con1==1){
                        con==0;
                      }else{
                        con=1;
                      }

                  }
            
            }

        }else{
            cout<<endl;
            continue;
        }
        if(q1.empty()){
           cout<<endl;
        }else if (!q1.empty())
        {
            while (! q1.empty())
            {  
                cout<<q1.front();
                q1.pop();
            }
            cout<<endl;
        }
      
    
    }
    
     return 0;
}