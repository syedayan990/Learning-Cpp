#include<iostream>
using namespace std;

int getMultiplier(int x,int y,int z){
    int result = x * y * z;
    cout << result << endl;
    return result;
}

void printMyName(){
    for(int i=1; i<=6; i++){
        cout<<"syed ayan"<<endl;
       
    }
    return ;
}

void multipleof5 (int num){
    for (int i=1; i<=10; i=i+1)
   { cout<< num * i <<endl;}
}


int converintocelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertintouppercase(char ch){
    char answer = ch-'a'+'A';
    return answer;
}




int main()
{
    /////////for multiplication of number//////////////////////////////////////////////

    //    int multiplicationanswer = getMultiplier(3,6,8);


    //////////////////for printing name //////////////////////////////////////////


    // printMyName();


    ////////////////////////for the table of any number like 5 6 7-----////////////

    // multipleof5(7);

    /////////for conversion of  far to cel ///////////////////////


    // int far = 56;
    // int answerincelcious  = converintocelcius(far);
    // cout<< "celcious = "<<answerincelcious << endl;

    //////////////////////convertingcase ///////////////////////////////
    // char answer =  convertintouppercase('a');
    // cout<<"character = "<< answer <<endl;
    return 0;
}