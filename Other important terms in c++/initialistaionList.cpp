#include<iostream>
using namespace std;

class abc {
     
    mutable int x;
    int *y;
    int z;

    public:
    //abc()
    // {
    //     x= 0;
    //     y = new int(0);
    // }
    //  abc(int _x , int _y , int _z=3)// z  has a defalt argument
    //  {
    //     x= _x;   
    //     y = new int(_y);
    //     z=_z;
    // }
    /////////////////initialisation list-----------------
    abc(int _x , int _y , int _z):x(_x) , y(new int(_y)) , z(_z){
        ////isme koi cheez likh sakte h ya values mai changes kr sakte he
    }
    /////////////////initialisation list end here and this willwork like construtor abc----

    int getx() const
    {
        x=10;// yaha humne x ki value change kki h mutable lgakr mutable use hi isliye hota ki const use krke bhi hum value change kr sakte h 
        return x;
    }
    void setx(int _val)
    {
        x = _val;
    }


     int gety() const
     {
        return *y;
    }
    void sety(int _val)
    {
        *y = _val;
    }


     int getz() const
      {
        return z;
    }
    // void set(int _val){
    //     x = _val;
    // }

      


};

void printABC(const abc&a){
    cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;

}


int main(){

    abc a(1 , 2 ,3);
    printABC(a);

    //  abc Alpha;
    // cout <<Alpha.getx()<<endl;
    // cout <<Alpha.gety()<<endl;


    return 0;
}