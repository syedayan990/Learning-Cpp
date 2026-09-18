#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

///min(),max(),min_element(),max_element()-----------------------------------
    int a = 10;
    int b = 20;
    cout<<"find the minimum value in a ans b : "<<endl;
    cout<< max(a,b) <<endl;
    cout<<endl;
    cout<<"find the maximum value in a and b : "<<endl;
    cout<< min(a,b) <<endl;
     cout<<endl;


    vector<int> ayan;
    ayan.push_back(10);
    ayan.push_back(20);
    ayan.push_back(30);
    ayan.push_back(40);
   cout<<"find the min_element value in the iterator : "<<endl;
    vector<int>::iterator it = min_element(ayan.begin(),ayan.end());
    cout<< *it <<endl;
     cout<<endl;
    cout<<"find the max_element value in the iterator : "<<endl;
    vector<int>::iterator its = max_element(ayan.begin(),ayan.end());
    cout<< *its <<endl;

    return 0;
}