#include<iostream>
#include<stack>
using namespace std;


int main(){

//       //creating a stack and puch , pop and size the stack
//       stack<int> ayan;
//       ayan.push(10);
//       ayan.push(20);
//       ayan.push(30);
//       ayan.push(40);
//       ayan.push(50);
//       ayan.pop();
//       ayan.pop();


//       cout<<ayan.size()<<endl;
//       cout<<endl;
//      while(!ayan.empty())
// {
//     cout << ayan.top() << endl;
//     ayan.pop();
// }
////top() condition
// stack<int> ayan;
//       ayan.push(10);
//       ayan.push(20);
//       ayan.push(30);
//       ayan.push(40);
//       ayan.push(50);
//       ayan.pop();
//       ayan.pop();
//       cout<<ayan.top()<<endl;




//empty() condition
// stack<int> ayan;
//       ayan.push(10);
//       ayan.push(20);
//       ayan.push(30);
//       ayan.push(40);
//       ayan.push(50);
//       ayan.pop();
//       ayan.pop();
//       cout<<ayan.top()<<endl;


//     if(ayan.empty()==true){
//         cout<<"stack is  empty : "<<endl;
//     }else{
//         cout<<"stack is not empty : "<<endl;
//     }




//swap() condition
stack<int> ayan1;
      ayan1.push(10);
      ayan1.push(20);

      stack<int>ayan2;
      ayan2.push(100);
      ayan2.push(200);

      ayan1.swap(ayan2);
      cout<<ayan1.top()<<" "<<ayan2.top()<<endl;
    return 0;
}