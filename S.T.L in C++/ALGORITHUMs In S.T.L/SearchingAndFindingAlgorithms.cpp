#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;


int main(){

// ////binary_search()------------------------------------------
// vector<int> ayan;
// ayan.push_back(10);
// ayan.push_back(20);
// ayan.push_back(30);
// ayan.push_back(40);
// //if target is find then print 1 if not find than print 0;
// int target = 300;
//   bool it = binary_search(ayan.begin(),ayan.end(),target);
//   cout<<it<<endl;








////lower_bound() and upper_bound() and equal_range ------------------------------------------
vector<int> ayan;
ayan.push_back(10);
ayan.push_back(20);
ayan.push_back(30);
ayan.push_back(40);
// if the target value is not present in iterator than lower_bound() print just next big value
vector<int>::iterator it = lower_bound(ayan.begin(),ayan.end(),35);
  cout<< *it <<endl;
////if the target value is not present or present in iterator than upper_bound() always print just next big value
vector<int>::iterator its = upper_bound(ayan.begin(),ayan.end(),30);
  cout<< *its <<endl;


//equal_range();
  auto p = equal_range(ayan.begin(), ayan.end(), 30);

    cout << *p.first << endl;
     cout << *p.second << endl;
    
    return 0;
}