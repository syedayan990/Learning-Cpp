#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  ///creation of unordered_map
//     map<string , string> table;

// ////there are three way of insertion value in map
// table["in"]="india"; /////////first way to insert value in map
// table.insert(make_pair("en","england"));/////////second way to insert value in map
// ///here we see the condition of empty() , size() , clear()------------
// pair<string , string> ayan;
// ayan.first = "br";
// ayan.second = "brazil";
// table.insert(ayan);

// cout<<"size of map : "<<table.size()<<endl;
// table.clear();
// cout<<"size of map : "<<table.size()<<endl;

// if (table.empty()==true){
//     cout<<"map is empty : "<<endl;

// }
// else{
//     cout<<"map is not empty : "<<endl;
// }




//////// at() , updation -----------------
//  unordered_map<string , string> table;

// ////there are three way of insertion value in map
// table["in"]="india"; /////////first way to insert value in map
// table.insert(make_pair("en","england"));/////////second way to insert value in map
// ///here we see the condition of empty() , size() , clear()------------
// pair<string , string> ayan;
// ayan.first = "br";
// ayan.second = "brazil";
// table.insert(ayan);

// cout<<"size of map : "<<table.size()<<endl;

// cout<<table.at("in")<<endl;///////////////print the value of "in" 
// table.at("in")="india2";/////updation of map 
// cout<<table.at("in")<<endl;/////////////print again the value of "in" 




/////// begin() , end() and traverse the value of map-----------
// map<string , string> table;
map<int , string> table;

table.insert(make_pair(2,"ayan"));
table.insert(make_pair(3,"sheenam_rehbar"));
table.insert(make_pair(1,"sheenam"));


// table["in"]="india"; 
// table.insert(make_pair("en","england"));

// pair<string , string> ayan;
// ayan.first = "br";
// ayan.second = "brazil";
// table.insert(ayan);
 

map<int , string>::iterator it = table.begin();

while(it != table.end()){
    pair<int , string> ayan = *it;
    cout<<ayan.first<<" "<<ayan.second<<endl;
    it++;
}




//erase() value   
// unordered_map<string , string> table;


// table["in"]="india"; 
// table.insert(make_pair("en","england"));

// pair<string , string> ayan;
// ayan.first = "br";
// ayan.second = "brazil";
// table.insert(ayan);


// cout << table.size()<<endl;
// table.erase(table.begin(),table.end());

// cout << table.size()<<endl;







////////find()  and count() key method
// unordered_map<string , string> table;


// table["in"]="india"; 
// table.insert(make_pair("en","england"));

// pair<string , string> ayan;
// ayan.first = "br";
// ayan.second = "brazil";
// table.insert(ayan);


// if (table.find("in") != table.end())
// {
//     cout<<"key found : "<<endl;
// }
// else{
//     cout<<"key is not found : "<<endl;
// }
 

// if(table.count("in")==0)
// {
//     cout<<"key is not founf : "<<endl;
// }
// else{
//     cout<<"key is found : "<<endl;
// }

    return 0;
}