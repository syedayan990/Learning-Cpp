// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<queue>
// using namespace std;

// /// we want to create student class priority queue
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


// int main(){


//    //maxheap
//    priority_queue<int> ayan;//way 1 to write ,max heap
//     priority_queue<int, vector<int>, less<int>>ayan; //way 2 to write ,max heap

//    //min heap
//    //(priority_queue<int)--kis data per kam krege ,  (vector<int>)--type of container jispe kaam krege (greater<int>) ----type of comparator jaha kaam krege 
//    priority_queue<int, vector<int>, greater<int>>ayan;


//     return 0;
// }








/// we want to create student class priority queue
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
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

class comparator{
    public:
    bool operator()(student a , student b){
        //criteria -> min marks and max marks priority
        return a.marks < b.marks;
    }
};

int main(){

    priority_queue<student, vector<student>, comparator> ayan;

    ayan.push(student(90 ,"ayan"));
    ayan.push(student(80 ,"sheenam"));
    ayan.push(student(85 ,"husain"));
    ayan.push(student(72 ,"syed"));

//     for(student i : ayan){------traverse not possilr here
// cout<<i.marks<<endl;
//     }

cout<< ayan.top().marks <<" " <<ayan.top().name <<endl;
ayan.pop();
cout<< ayan.top().marks <<" " <<ayan.top().name <<endl;
ayan.pop();
cout<< ayan.top().marks <<" " <<ayan.top().name <<endl;
ayan.pop();
cout<< ayan.top().marks <<" " <<ayan.top().name <<endl;
ayan.pop();

    return 0;
}