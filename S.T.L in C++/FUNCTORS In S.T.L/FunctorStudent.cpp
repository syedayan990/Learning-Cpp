#include<iostream>
using namespace std;

class student{
    public:

    int marks;
    string name;
    student()////----constructor
    {

    }
    student(int marks , string name){
    this->marks = marks;
    this->name = name;
}
  
};


class studentComprator{
    public:
   bool operator()(student a , student b){
        return a.marks < b.marks;
    }
};

int main(){

    student s1;
    student s2;

    s1.marks = 92;
    s1.name="ayan";

    s2.marks=98;
    s2.name="sheenam";

////hume functors ke rounded braket ko overload krna pdega taki hum us functor ko yaha funtion ki trhe call kra sake 
    studentComprator cmp;
    if (cmp(s1 , s2) == true){
    cout<<"sheenam has more marks than ayan : "<<endl;
    }
    else{
        cout<<"ayan has more marks than sheenam : "<<endl;
    }

    

    return 0;
}