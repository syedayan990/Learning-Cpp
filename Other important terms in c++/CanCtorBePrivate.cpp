///when ctor is in public ----------------------------------------
// #include<iostream>
// using namespace std;

// class Box{



// int width;
// public:

// Box(int _w) : width(_w){};////when ctor is in public 

// int getwidth(){
//     return width;
// }
// void setwidth(int _val){ 
//     width = _val;
// }


   

// };

// int main(){

//     Box b(5);
//     cout<<"printing the value of width : "<<b.getwidth()<<endl;


//     return 0;
// }






//when ctor is in private  ----------------------------------------
// #include<iostream>
// using namespace std;

// class Box{

// private :

// int width;

// Box(int _w) : width(_w){};////when ctor is in private  
// public:



// int getwidth(){
//     return width;
// }
// void setwidth(int _val){ 
//     width = _val;
// }


   

// };

// // int main(){

// //     Box b(5);
// //     cout<<"printing the value of width : "<<b.getwidth()<<endl;


// //     return 0;
// // }





#include<iostream>
using namespace std;

class Box{

private :

int width;

Box(int _w) : width(_w){}; 
public:



int getwidth(){
    return width;
}
void setwidth(int _val){ 
    width = _val;
}


   friend class Boxfactory;

};

class Boxfactory{

   int count;
   public:

   Box getAbox(int _w)
   {
    ++count;
    return Box(_w);
   } 
};

int main(){

    Boxfactory bfect;
    Box b = bfect.getAbox(5);
    cout<<b.getwidth()<<endl;

    

    return 0;
}

