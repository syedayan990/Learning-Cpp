#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main(){

list<int> ayan;
ayan.push_back(10);
ayan.push_back(20);
ayan.push_back(30);

// list<int>::iterator it = ayan.begin();
// while (it != ayan.end())
// {
//     cout<< *it <<endl;
//     it++;
// }


list<int>::iterator its = ayan.end();

while (its != ayan.begin())
{
    --its;
    cout<< *its <<endl;
    
}


//with for loopppppp----------------------
//// without (r)---------------------------------------------------
// for(auto it = ayan.begin(); it != ayan.end(); ++it)//here (r) is the sign of reverse 
// {
//     cout << *it << endl;
// }
// //// with (r)---------------------------------------------------
// for(auto it = ayan.rbegin(); it != ayan.rend(); ++it)//here (r) is the sign of reverse 
// {
//     cout << *it << endl;
// }




   


    return 0;
}