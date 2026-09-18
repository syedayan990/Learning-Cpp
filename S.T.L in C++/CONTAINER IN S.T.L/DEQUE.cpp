#include<iostream>
#include<deque>
using namespace std;

int main(){

   //creation of deque  insertion push_back(), push_front()---------------------
//    deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);

//    ayan.push_front(400);
//    ayan.push_front(4000);
//    for (int i : ayan ){
//     cout << i << endl;
//    }



//    //pop_back(), pop_front() and size() condition
//    deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);

//    ayan.push_front(400);
//    ayan.push_front(4000);

//    ayan.pop_back();
//    ayan.pop_front();

//    for (int i : ayan )
//    {
//     cout << i << endl;
//    }
//    cout<<endl;
//    cout<<ayan.size()<<endl;







// //back(), front() and size() condition
//    deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);

//    ayan.push_front(400);
//    ayan.push_front(4000);

//    ayan.pop_back();
//    ayan.pop_front();
 
//    cout<<"traversal value of deque : "<<endl;
//    for (int i : ayan )
//    {
//     cout << i << endl;
//    }
//    cout<<endl;
//    cout<<"size of deque : "<<ayan.size()<<endl;
//    cout<<endl;
//    cout<<"front value of deque : "<<ayan.front()<<endl;
//    cout<<"back value of deque : "<<ayan.back()<<endl;




//empty() , back(), front() and size() condition
//    deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);

//    ayan.push_front(400);
//    ayan.push_front(4000);

//    ayan.pop_back();
//    ayan.pop_front();
 
//    cout<<"traversal value of deque : "<<endl;
//    for (int i : ayan )
//    {
//     cout << i << endl;
//    }
//    cout<<endl;
//    cout<<"size of deque : "<<ayan.size()<<endl;
//    cout<<endl;
//    cout<<"front value of deque : "<<ayan.front()<<endl;
//    cout<<"back value of deque : "<<ayan.back()<<endl;

//    cout<<endl;
//    if(ayan.empty()==true){
//     cout<<"deque is empty : "<<endl;
//    }
//    else{
//     cout<<"deque is  not empty : "<<endl;
//    }




///begin() and end() condition--------------------------
// deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);

//    ayan.push_front(400);
//    ayan.push_front(4000);

//    ayan.pop_back();
//    ayan.pop_front();
 
//    cout<<"traversal value of deque : "<<endl;
//    deque<int>::iterator it = ayan.begin();


//    while(it != ayan.end()){
//     cout << *it << endl;
//     it++;
//    }


//    cout<<endl;
//    cout<<"size of deque : "<<ayan.size()<<endl;
//    cout<<endl;
//    cout<<"front value of deque : "<<ayan.front()<<endl;
//    cout<<"back value of deque : "<<ayan.back()<<endl;

//    cout<<endl;
//    if(ayan.empty()==true){
//     cout<<"deque is empty : "<<endl;
//    }
//    else{
//     cout<<"deque is  not empty : "<<endl;
//    }


//at() , insert() , clear() conditon
// deque<int> ayan;
//    ayan.push_back(10);
//    ayan.push_back(20);
//    ayan.push_back(30);
//    ayan.push_back(40);

//    ayan.push_front(400);
//    ayan.push_front(4000);

//    ayan.pop_back();
//    ayan.pop_front();

//    //cout<<ayan.at(3)<<endl;
//    cout<<ayan.size()<<endl;
//    ayan.insert(ayan.begin(),50);
//    cout<<ayan[0]<<endl;
//     cout<<ayan.size()<<endl;
//     ayan.clear();
//      cout<<ayan.size()<<endl;




////erase()   condition
deque<int> ayan;
   ayan.push_back(10);
   ayan.push_back(20);
   ayan.push_back(30);
   ayan.push_back(40);

   ayan.push_front(400);
   ayan.push_front(4000);

   ayan.pop_back();
   ayan.pop_front();
  ayan.erase(ayan.begin(),ayan.end());


  deque<int>::iterator it = ayan.begin();

  while(it != ayan.end()){
    cout << *it << endl;
    it++;
   }



    return 0;
}