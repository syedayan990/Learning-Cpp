#include<iostream>
#include<queue>
using namespace std;

int main(){


    /////creation of priority queue
    // priority_queue<int>ayan;
    // //->max-heap -----> maximum value ----> heighest priority


    // // push() condition
    // ayan.push(10);
    //     ayan.push(20);
    //         ayan.push(55);
    //             ayan.push(40);

    //         ///top element ---> hieghest priority element

    //         cout << "heighest priority element : "<<ayan.top() <<endl;
    //         cout<<ayan.size()<<endl;







//pop() and size() condition
    // priority_queue<int>ayan;
    // ayan.push(10);
    // ayan.push(20);
    // ayan.push(55);
    // ayan.push(40);

    // ayan.pop();

    // cout << "heighest priority element : "<<ayan.top() <<endl;
    //  cout<<ayan.size()<<endl;




//////main heap creation-----------------------------
///main heap ----> minimum value ----> heighest priority
priority_queue<int,vector<int> , greater<int>> ayan;

ayan.push(30);
ayan.push(40);
ayan.push(55);
ayan.push(12);

ayan.pop();

/////before pop 12 print hoga 
cout<<"heigest priority value : "<<ayan.top()<<endl;

////after pop  30 print hoga
cout<<"heigest priority value : "<<ayan.top()<<endl;


if (ayan.empty()==true){
    cout<<"priority queue is empty : "<<endl;

}
else{
    cout<<"priority queue is not empty : "<<endl;
}





    return 0;
}