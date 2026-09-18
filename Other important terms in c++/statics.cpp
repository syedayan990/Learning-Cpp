#include<iostream>
using namespace std;


class abc
{
public:


 static int x;
 static int y;
void print() const
{
    

    cout << x << " " << y << endl;
}
};

int abc::x = 0;
int abc::y = 0;


 int main(){

   abc obj1;

   obj1.x=1;
   obj1.y=2;
   obj1.print();
   
   abc obj2;

   obj2.x=3;
   obj2.y=4;
    obj1.print();
   obj2.print();


    return 0;
}
