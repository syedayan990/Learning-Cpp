#include<iostream>
using namespace std;

int main(){

    /////////////dynamic memory---------------
    // int *ptr = new int;
    // *ptr=10;
    // cout<< "value of *ptr : "<< *ptr <<" ";
    // cout << "value of ptr : "<< ptr <<" ";
    // cout << "value of &ptr : "<< &ptr<<" ";



    ///////////now i don't need ptr so we need to delete this memmory spaace------
    // delete (ptr);






    // int *ptr = new int[5];
    // ptr[0]=10;
    // ptr[1]=20;
    // *(ptr+2)=30;
    //  *(ptr+3)=40;
    //  *(ptr+4)=50;

    //  for (int index=0; index<5; index=index+1)
    //  {
    //     cout<<ptr[index]<<" ";
    //  }
      
    //  delete []ptr;






    // multiple pointer case-----------------------------------------[
    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;



    cout << a <<endl;
    cout << &a <<endl;
    //cout << *a <<" ";
    cout <<  ptr <<endl;
    cout << &ptr <<endl;
    cout << *ptr <<endl;
    cout << ctr <<endl;
    cout << &ctr <<endl;
    cout << *ctr <<endl;
    cout << **ctr  <<endl;
    cout << dtr  <<endl;
    cout << &dtr  <<endl;
    cout << *dtr  <<endl;
    cout << **dtr  <<endl;
    cout << ***dtr  <<endl;

    return 0;
}