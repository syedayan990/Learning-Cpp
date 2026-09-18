#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main(){

// list<int> ayan = {10,20,30,40,50,60};


//traverse using iterator
// list<int> ::iterator it = ayan.begin();

// while(it != ayan.end()){

//    *it = (*it)+7;///write------
//    cout<<*it<<endl;//read-------
//   it++;  ///forward move--------

// }



///backword move ------------
// list<int> ::iterator it = ayan.end();

// while(it != ayan.begin()){
//      it--;  ///backword move--------
//    *it = (*it)-5;///write------
//    cout<<*it<<endl;//read-------
// }




////random access-------------
vector<int> ayan = {10,20,30,40,50,60};
vector<int>::iterator it = ayan.begin()+3;
cout<<*it<<endl;

  









return 0;
}