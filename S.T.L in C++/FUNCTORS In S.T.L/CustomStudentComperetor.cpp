// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;


// class student{
// public:
//      int marks ;
//      string name ;
//      student()///--constructor
//      {

//      }
    
//     student( int m , string n){
//         this->marks = m;
//         this->name = n;
//   }


// };

// class comperator{
//    public:
//    bool operator()(student a , student b){
//     return a.marks > b.marks;
//    }


// };

// int main(){
//      vector<student> ayan;
//      ayan.push_back(student(90,"ayan"));
//      ayan.push_back(student(88,"husain"));
//      ayan.push_back(student(98,"sheenam"));

//     sort(ayan.begin(),ayan.end(),comperator());

//     for (student a : ayan){
//         cout<< a.marks<<endl;
//         cout<<a.name<<endl;
//     }

//     return 0;
// }





///if marks is equal then how will you sort this ---
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class student{
public:
     int marks ;
     string name ;
     student()///--constructor
     {

     }
    
    student( int m , string n){
        this->marks = m;
        this->name = n;
  }


};

class comperator{
   public:
   bool operator()(student a , student b){
    if(a.marks == b.marks){
        return a.name < b.name;
    }
    return a.marks > b.marks;
   }


};

int main(){
     vector<student> ayan;
     ayan.push_back(student(90,"ayan"));
     ayan.push_back(student(88,"sheenam"));
     ayan.push_back(student(90,"husain"));

    sort(ayan.begin(),ayan.end(),comperator());

    for (student a : ayan){
        cout<< a.marks<<endl;
        cout<<a.name<<endl;
    }

    return 0;
}