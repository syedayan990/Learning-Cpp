#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){
//     vector<int> ayan;
//     ayan.push_back(10);
//     ayan.push_back(20);
//     ayan.push_back(30);
//     ayan.push_back(40);


//  make_heap(ayan.begin(),ayan.end());
// // its convert into max heap
// for(int i : ayan){
//     cout << i << endl;
// }
// cout<<endl;



// //////it is the wrong way to insert a value into heap----------
// // ayan.push_back(100);
// // for(int i : ayan){
// //     cout << i << endl;
// // }cout<<endl;
// // cout<<endl;


// ////so we apply the push_heap() function to create right heap----------
// ayan.push_back(100);
// push_heap(ayan.begin(),ayan.end());
// for(int i : ayan){
//     cout << i << endl;
// }




//for deletion we use the pop_heap() contion------------
//   vector<int> ayan;
//  ayan.push_back(10);
//     ayan.push_back(20);
//     ayan.push_back(30);
//     ayan.push_back(40);
//     ayan.push_back(100);

//      make_heap(ayan.begin(),ayan.end());
// // its convert into max heap
// for(int i : ayan){
//     cout << i << endl;
// }
// cout<<endl;
// ///heap elemnt shift last and become array by using pop_heap();
// pop_heap(ayan.begin(),ayan.end());
// for(int i : ayan){
//     cout << i << endl;
// }


    


//for sort_heap()   using sorting heap----------
 vector<int> ayan;
 ayan.push_back(10);
  ayan.push_back(30);
    ayan.push_back(20);
   ayan.push_back(100);
    ayan.push_back(40);
   

     make_heap(ayan.begin(),ayan.end());
// its convert into max heap
for(int i : ayan){
    cout << i << endl;
}
cout<<endl;


sort_heap(ayan.begin(),ayan.end());
for(int i : ayan){
    cout << i << endl;
}
cout<<endl;
    return 0;
}
