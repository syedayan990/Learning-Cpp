// #include<iostream>
// using namespace std;

// int main(){

//    //const int x=5; //x is a constant
   
//     //initialisation can be done 
//     //but we const re-assign value 
//     // x=10;
//     // cout<<x<<endl;


//     //2-const with pointer
//     //int const *a = new int(2);
//     //const int *a = new int(2);//cont data non-const pointer
//    // cout<<*a<<endl;

//     //*a=20; //const change the constant of pointer
//     //cout<<*a<<endl;
//     // int b=20;
//     // a=&b;//pointer itself cane be reassingned
//     // cout<<*a<<endl;
    
//    //const pointer bur non const data 
// //    int *const a = new int(2);
// //    cout<<*a<<endl;
// //    *a=20;//chal jaiga
// //    cout<<*a<<endl;


// //const pointer and const data 
// // const int *const a =new int(10);
// // cout<<*a<<endl;
// // *a=50;
// // int b =100;
// // a=&b;


//     return 0;
// }





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
     abc(int _x , int _y , int _z=3)// z  has a defalt argument
     {
        x= _x;   
        y = new int(_y);
        z=_z;
    }

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