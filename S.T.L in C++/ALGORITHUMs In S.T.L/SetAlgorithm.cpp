#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    vector<int> ayan1;
    ayan1.push_back(1);
    ayan1.push_back(2);
    ayan1.push_back(3);
    ayan1.push_back(4);
     vector<int> ayan2;
    ayan2.push_back(3);
    ayan2.push_back(4);
    ayan2.push_back(5);
    ayan2.push_back(6);
//comman vector reult for storing all sets data----------------
 vector<int> result;
 //intersecton of set set_intersection()----------
//  set_union(ayan1.begin(),ayan1.end(),ayan2.begin(),ayan2.end(),inserter(result , result.begin()));
//  for(int i:result){
//     cout<< i <<endl;
//  }cout<<endl;


 //intersecton of set set_intersection()------------------------------
//   set_intersection(ayan1.begin(),ayan1.end(),ayan2.begin(),ayan2.end(),inserter(result , result.begin()));
//  for(int i:result){
//     cout<< i <<endl;
//  }cout<<endl;


//difference of set set_difference()------------------------------
//  set_difference(ayan1.begin(),ayan1.end(),ayan2.begin(),ayan2.end(),inserter(result , result.begin()));
//  for(int i:result){
//     cout<< i <<endl;
//  }cout<<endl;
 

//symmetric_difference of set set_symmetric_difference()
set_symmetric_difference (ayan1.begin(),ayan1.end(),ayan2.begin(),ayan2.end(),inserter(result , result.begin()));
 for(int i:result){
    cout<< i <<endl;
 }cout<<endl;




    return 0;
}