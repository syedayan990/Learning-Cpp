#include<iostream>
#include<set>
using namespace std;


int main(){
   // creation set and insertion the value of set 
   set<int> ayan;
   cout<<"insert the value of set : "<<endl;
   ayan.insert(10);
   ayan.insert(20);
   ayan.insert(30);
   ayan.insert(40);
   ayan.insert(30);



 ////traverse the set value
    cout<<endl;
   cout<<"traverse the set : "<<endl;
   set<int>::iterator it = ayan.begin();

   while( it != ayan.end()){
    cout << *it <<endl;
    it++;
   }

   //size of the set
   cout<<endl;
   cout<<"the size of set : "<<endl;
   cout<< ayan.size()<<endl;
//    ayan.clear();
//    cout<<"the size of set after clear : "<<endl;
//    cout<< ayan.size()<<endl;


   ///////set is empty() or not
   if(ayan.empty() == true){
    cout << "the set is empty : "<<endl;
   }
   else{
    cout << "the set is not empty : "<<endl;
   }

///erase()------------------------------
   cout<<"the size of set after erase : "<<endl;
   
   ayan.erase(ayan.begin(),ayan.end());
   cout<< ayan.size()<<endl;










   /////////////////find and count in set------------------------

    return 0;
}