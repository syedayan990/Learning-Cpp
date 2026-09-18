#include<iostream>
using namespace std;

int main(){
    // char grade;
    int day = 3;
    cout << "enter day"<<endl;
    cin>> day;

//-------------------------------------------------------------

// with if else conditin
    // if(grade=='A'){
    // cout << "your marks lies between 90 to 100"<<endl;
    // }
    // else if(grade=='B'){
    //     cout << "your marks lies between 80 to 90"<<endl;
    // }
    // else if(grade=='C'){
    //     cout << "your marks lies between 70 to 80"<<endl;
    // }
    // else if(grade=='D'){
    //     cout << "your marks lies between 60 to 70"<<endl;
    // }
    // else{
    //     cout << "you are fail"<<endl;

    // }

    //-------------------------------------------------------------------------------------

    // with switch statements  
    
    // switch(grade){
    // case 'A':cout << "your marks lies between 90 to 100"<<endl;
    // break;
    // case 'B':cout << "your marks lies between 80 to 90"<<endl;
    // break;
    // case 'C':cout << "your marks lies between 70 to 80"<<endl;
    // break;
    // case 'D':cout << "your marks lies between 60 to 70"<<endl;
    // break;
    // default: cout << "you are fail"<<endl;

    // }
    

    //-------------------------------------------------------------------------------
    //switch case for days 
    switch (day)
    {
    case 1:
        cout<<"today is monday"<<endl;
        break;
    case 2:
        cout<<"today is tuesday"<<endl;
        break;
   case 3:
        cout<<"today is wednesday"<<endl;
        break;
   case 4:
        cout<<"today is thusday"<<endl;
        break;
   case 5:
        cout<<"today is friday"<<endl;
        break;
    case 6:
        cout<<"today is saturday"<<endl;
        break;
    case 7:
        cout<<"today is sundaty"<<endl;
        break;
    default:
     
        cout<<"holiday"<<endl;
       
        break;
    }

    return 0;
}