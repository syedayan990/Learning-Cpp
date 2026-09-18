#include<iostream>
using namespace std;

int main()
{

    int num = 23;
    int *ptr = &num;
    cout<<"printing the address of num : "<<&num<<endl;


    cout<< num <<endl;
    cout<< &num <<endl;
    cout<< ptr <<endl;
    cout<< &ptr <<endl;
    cout<< *ptr <<endl;
    // (*ptr)++;
    (*ptr)=*ptr+1;
    cout<< num << endl;

    return 0;
}