#include<iostream>
using namespace std;




 int a = 5;//global veriable

 void fun(){
    int a= 60;
    cout<<a<<endl;
    cout<<::a<<endl;
    ::a=40;
    cout<<::a<<endl;
}



int main(){
      
    ::a = 20;/////global veriable changes
    int a = 34; // local veriable
    {
        int a=70;
        cout<<a<<endl;  ///int a =70 line number 23 se 26 tak hi initialise hoga bus or sabse recent h to sabse phlae print hoga ye 
    }

  cout << "value of a : "<<a<<endl;///for accessing local veriable
  cout <<::a<<endl;//////for accessing global veriable

fun();
    return 0;
}