#include<iostream>
using namespace std;

class Base{
public:
Base(){

    cout<<"base class ctor : "<<endl;

}
virtual ~Base(){
    cout<<"base class dtor : "<<endl;
}


};

class derived : public Base{
       int *a;
   public:

   derived(){
    a = new int(1000);

    cout<<"derived class ctor : "<<endl;
   }
   ~derived(){
    delete[] a;
    cout<<"derived class dtor : "<<endl;
   }
};



int main (){
    Base *b=new derived();
    delete b;

    return 0;
}