#include<iostream>
using namespace std;

class abc{
public:
int x;
int *y;

abc(int _x , int _y):x(_x) , y(new int (_y)){}

//default dumb copy constrautor  : it does SHALLOW COPY
// abc(const abc& obj)
// {
//    x=obj.x;
//    y=obj.y;

// }



////      SMART DEEP COPY constructor-------------------

 abc(const abc& obj)
{
   x=obj.x;
   y=new int(*obj.y);

}

void print() const
 {
    
    printf("x : %d\nPTR y : %p\ncontent of *(y) : %d\n\n" , x , y , *y) ;

}

};


int main(){
    abc a(1,2);
    cout<<"printing a : "<<endl;
    a.print();

abc b=a;
cout<<"printing b : "<<endl;
b.print();

*b.y=20;

cout<<"printing a : "<<endl;
b.print();

cout<<"printing a : "<<endl;
 a.print();
    return 0;
}