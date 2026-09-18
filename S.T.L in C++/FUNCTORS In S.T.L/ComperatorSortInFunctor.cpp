#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//a > b is out logic to comparate the value in descending order

class Comparator{
   public:
   bool operator()(int a , int b){
    return a > b;
   }

};
 
int main(){
    // print into ascending order 
  cout << "sort and print into ascending order : "<<endl;
     vector<int> ayan ={50 , 20 , 40 , 10 , 30};
     //this sorting is for ascending order if we  want in decending order we need to use functor comparator ------------------
     sort(ayan.begin(),ayan.end());
     for (int i : ayan){
        cout<<i<<endl;
     }
     cout<<endl;


    //  print into descending order
 cout << "sort and print into descending order : "<<endl;
       vector<int> ayan1 ={50 , 20 , 40 , 10 , 30};
     sort(ayan1.begin(),ayan1.end(), Comparator());//we use coparator for sort into descneding order
     for (int i : ayan1){
        cout<<i<<endl;
     }

    return 0;
} 