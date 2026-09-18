#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


int main(){
   // creation unordered_set and insertion the value of unordered_set
   unordered_set<int> ayan;
   cout<<"insert the value of unordered_set : "<<endl;
   ayan.insert(10);
   ayan.insert(20);
   ayan.insert(30);
   ayan.insert(40);
   ayan.insert(30);



 ////traverse the unordered_set value
    cout<<endl;
   cout<<"traverse the unordered_set : "<<endl;
   unordered_set<int>::iterator it = ayan.begin();

   while( it != ayan.end()){
    cout << *it <<endl;
    it++;
   }

   //size of the unordered_set
   cout<<endl;
   cout<<"the size of unordered_set : "<<endl;
   cout<< ayan.size()<<endl;
//    ayan.clear();
//    cout<<"the size of unordered_set after clear : "<<endl;
//    cout<< ayan.size()<<endl;

   ///////unordered_set is empty() or not
   if(ayan.empty() == true){
    cout << "the unordered_set is empty : "<<endl;
   }
   else{
    cout << "the unordered_set is not empty : "<<endl;
   }


   //erase() function---------------------
    cout<<"the size of unordered_set after erase : "<<endl;
   
   ayan.erase(ayan.begin(),ayan.end());
   cout<< ayan.size()<<endl;





   /////////////////find and count in set-------------------------


    return 0;
}