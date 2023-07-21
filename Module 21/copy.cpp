#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur_in=0;
    while (true)
    {
        int left_in=(cur_in*2)+1;
        int right_in=(cur_in*2)+2;
        int last_in=v.size()-1;
        if(left_in<last_in && right_in<last_in){
            if(v[left_in]>=v[right_in && v[left_in]>v[cur_in]]){
                swap(v[left_in],v[cur_in]);
                cur_in=left_in;
            }else if (v[right_in]>=v[left_in] && v[right_in]>v[cur_in])
            {
                swap(v[right_in],v[cur_in]);
                cur_in=right_in;
            }else{
                break;
            }
            
        }else if (left_in<last_in)
        {
            if(v[left_in]>v[cur_in]){
                swap(v[left_in],v[cur_in]);
                cur_in=left_in;
            }else{
                break;
            }
        }else if (right_in<last_in)
        {
             if(v[right_in]>v[cur_in]){
                swap(v[right_in],v[cur_in]);
                cur_in=right_in;
            }else{
                break;
            }
        }else{
            break;
        }
        
        
    }
    
}
void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);

    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}