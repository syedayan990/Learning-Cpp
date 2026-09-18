#include<iostream>
using namespace std;

int main()
{
//for  pre-increment ---------------------------------------------------------------
    //   int a=5;
    //   cout<<++a<<endl;

    ////for  post-increment ---------------------------------------------------------------
    //   int a=5;
    //   cout<<a++<<endl;
    //   cout<<a<<endl;


//for pre-decriment-----------------------------------------------------------------
    // int a=5;
    //  cout<<--a<<endl;

//for post-decriment-----------------------------------------------------------------
    // int a=5;
    //  cout<<a--<<endl;
    //  cout<<a<<endl;

//for arthmetic operators------------------------------------------------------

    // int a=5;
    // int b=6;

    // int result=a&b;


    // cout<<a+b<<endl;

    //   cout<<a-b<<endl;

    //    cout<<a*b<<endl;

    //     cout<<a/b<<endl;

    //      cout<<a%b<<endl;

    // cout << (5.0/2)<<endl;


//for relational operators-------------------------------------------------------------------

//   cout<<(10 != 5) <<endl;

//for logical operators------------------------------------------------------------------------

//1-&&---------------------------------------------------
//   bool condition1=true;
//   bool condition2=true;
//   bool condition3=false;


//   if(condition1 && condition2 && condition3){
//      cout << "all condition the are  ture "<<endl;
//   }
//   else {
//     cout<< "all condition are not ture"<<endl;
//   }

//2-|| -------------------------------------------------------------------------------
//  bool condition1=true;
//   bool condition2=true;
//   bool condition3=false;


//   if(condition1 || condition2 || condition3){
//      cout << "if any true ture "<<endl;
//   }
//   else {
//     cout<< " if all false then false"<<endl;
//   }

//not operators------------------------------------------------------------------------------

// bool condition = (5!=10);
// cout<<!condition<<endl;
// bool condition = (10);


//---------assignment operators-------------------------------------------------

// int a=5;
// ////a=a+5;
// cout<<(a+=10)<<endl;
// cout<<(a-=2)<<endl;
// cout<<(a*=5)<<endl;
// cout<<(a/=5)<<endl;
// cout<<(a%=3)<<endl;
// cout<<a<<endl;
////cout<<(a+=1)<<endl;


///////////=----bitwise operators------------------------------------------------------------------


cout<<(4&5)<<endl;  //       and operators
cout<<(4|5)<<endl; //        or operators
cout<<(~5)<<endl;  //     invert operators
cout<<(5<<2)<<endl; //left shift operators
cout<<(5>>3)<<endl; //right shift operators
cout<<(4^5)<<endl;// xor operator
cout<<(5^5)<<endl;// xor operator

 



    return 0;
}