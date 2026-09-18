#include<iostream>
using namespace std;

class functorsOne{
    public:
    bool operator()(int a, int b){
        ///descending order mai cmp(comperission) krna chate ho.
        //if a > b -> true , a should be placesd before b.
        //thats why descending order banta hai.
        return a > b;
    } 
};


int main(){

      functorsOne cmp;

      if(cmp(10 , 5) == true){
        cout<<"10 is greater than five : "<<endl;
      }
      else{
        cout<<"10 is lesser than 5 : "<<endl;
      }


    return 0;
}