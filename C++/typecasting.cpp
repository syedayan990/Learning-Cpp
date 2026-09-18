#include<iostream>
using namespace std;

int main()
{
    ////////////////////////----implicit typecasting-----///////////////////////////////
    //    for int-float or vise-versa converstion--------------------------------------
    // int num1=12;
    // float num2=4.5;
    // // int result = num1+num2;
    // float result = num1+num2;
    // cout<<result/*or num1+num2*/<<endl;


    //-------------for char to int or vise-versa converstion------------------------------
     // char to int ----------------------------
    // char ch='B';
    // int a = ch+5;
    // cout << a << endl;


    // char ch='B';
    // char a = ch+5;
    // cout << a << endl;


    //---------------------int to char------------------------------------
//      int a = 5;
//      int b=63;
//     //char ch='B';
//     char result= a+b;
//    // char result = ch+a;
    
//     cout << result << endl;
    //  int a=67;
    //  char ch='a';
    //  cout <<ch<<endl;



    //////////////////////////////----rexplicit typecasting------////////////////////////////


    // int num1=12;
    // float num2=6.3;
    // float result = num1 + (int)num2;
    // // float result = num1 + num2;
    // cout<< result<< endl;
   


    // double pi=3.1456;
    // int inpi= int(pi);
    // cout<<inpi<<endl;


    // float skynumber=68.56;
    // char skychar=(char)skynumber;
    // cout << skychar<<endl;

    int num1=10;
    int num2=3;
    int result=num1/num2;
    float result=(float)num1/num2;
    cout<<result<<endl;

    return 0;
}
