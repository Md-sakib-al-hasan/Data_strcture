for(int i=0;i<looping;i++){
                char sto=q1.front();
                q1.pop();
                char sto1=q1.front();
                if(sto == sto1){
                    q1.pop();
                    i++;
                }else{
                    q2.push(sto);
                    cout<<sto<<endl;
                }
                 
                }
                if(!q1.empty()){
            
                q2.push(q1.front());
                
                }