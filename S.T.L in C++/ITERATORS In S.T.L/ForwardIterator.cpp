#include<iostream>
#include<algorithm>
#include<vector>
#include<forward_list>
#include<numeric>
#include<stack>
using namespace std;

int main(){
   


    ///forward ietrator()-------------------------
    // forward_list<int> ayan;
    // ayan.push_front(10);
    // ayan.push_front(20);
    // ayan.push_front(30);


    // forward_list<int>::iterator it = ayan.begin();

    // while (it != ayan.end())
    
    // {
    //     cout<< *it <<endl;
    //     it++;
    // }



    
    // forward_list<int>::iterator it = ayan.begin();

    // while (it != ayan.end())
    
    // {
    //      *it = (*it)+5;
    //     it++;
    // }
    
    // it=ayan.begin();
    //  while (it != ayan.end())
    
    // {
    //    cout<< *it <<endl;
    //     it++;
    // }
    


    //backword traverse is not possible in forwrd list---
    //  forward_list<int>::iterator it = ayan.end();     
    //  while (it != ayan.begin())
    
    // {
    //     cout<<*it<<endl;
    //     it--;////not possile
    // }
    

  



    ////there are another way to traverse backword --------------

    //1-method
    //  forward_list<int> ayan;
    // ayan.push_front(10);
    // ayan.push_front(20);
    // ayan.push_front(30);
    // stack<int> st;

    // for(int x : ayan)
    //     st.push(x);

    // while(!st.empty()) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }


    //2- method------
//     vector<int> v(ayan.begin(), ayan.end());

// for(auto it = v.rbegin(); it != v.rend(); ++it)
// {
//     cout << *it << endl;
// }



    return 0;
}