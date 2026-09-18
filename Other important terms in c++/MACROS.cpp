#include<iostream>
using namespace std;

#define PI 3.14

float circleArea(float r){

   // return 3.14 * r * r; when not define macro pi value -----
   return PI * r * r;  ///// when define macro pi value ---------------------
}

float perametrecicle(float r){
    return 2*PI*r;
}

int main(){

  cout<<"the area of circle : "<<circleArea(10)<<endl;
 cout<<"the perametrecicle of circle : "<<perametrecicle(20)<<endl;

    return 0;
}