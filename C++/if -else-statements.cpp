#include<iostream>
using namespace std;

int main()
{
   //if  statements
//    int age;
//    cout<< "enter your age"<<endl;
//    cin>>age;


//    if(age>23){
//    cout<<"you are eligible"<<endl;
//    }
//     return 0;


//--------------------------------------------------------------------------------------------

//if-else statement

// int age;
//    cout<< "enter your age"<<endl;
//    cin>>age;


//    if(age>23){
//    cout<<"you are eligible"<<endl;
//    }
//    else 
//    {
//     cout << "you are not eligible"<<endl;
//    }
//     return 0;

//------------------------------------------------------------------------------------------------

//if-else-if statement


// int age=60;
// ---//    cout<< "enter your age"<<endl;
// ---//    cin>>age;


//    if(age>70){
//    cout<<"A"<<endl;
//    }
//    else if(age>60) 
//    {
//     cout << "B"<<endl;
//    }
//     else if(age>50) 
//    {
//     cout << "c"<<endl;
//    }
//     else if(age>40) 
//    {
//     cout << "D"<<endl;
//    }
//     return 0;

//------------------------------------------------------------------------------------------------


// if else-if else statement
// int age;
// cout<< "enter your age"<<endl;
//     cin>>age;

// if(age>70){
//    cout<<"condition-A"<<endl;
//    }
//    else if(age>60) 
//    {
//     cout << "condition-B"<<endl;
//    }
//     else if(age>50) 
//    {
//     cout << "condition-c"<<endl;
//    }
//     else if(age>40) 
//    {
//     cout << "condition-D"<<endl;
//    }
//    else
//    {
//     cout<<"all condition failed"<<endl;

//    }
//     return 0;



//--------------------------------------------------------------------------------------


//nested if statement

// float height = 6;
// cout<< "enter your height"<<endl;
// cin>> height;

// float weight =70.90;
// cout<<"enter your weight"<<endl;
// cin>>weight;


// if(height>5){
//     if(weight>65){
//     cout<<"you are healthy"<<endl;


// }
//  else{
//     cout<<"you are unhealthy"<<endl;}
// }
//   else {
//     cout << "you need complain"<<endl;
//   }
//   return 0;



//--------------------------------------------------------------------

//ternary operators
 
// condition ? expression_if_true : expression_if_false


// int age = 18;
// (age<=13) ? cout<<"eligible" : cout<< "not eligible";

//another ternary example 
int x = 10;
int y = 20;

int result = (x > y)? x : y;
cout<< "the result is :"<< result<<endl;
return 0; 
}