#include<iostream>
using namespace std;

// int main(){

      ///declaration of array 
      //int ayan[5];
      //it is not declaration of array 
      //int ayan[];
     //initalisation of an array
      //int ayan[4]={2,3,4,5,};

    //   int multipleof2[10]={2,4,6,8,10,12,14,16,18,20};
     // cout << multipleof2[3] << " ";

     //or 

    //   for(int index=0; index<=9; index++){
    //     cout<< multipleof2[index]<<" ";
    //   }

//    int arr[5];
//    for(int index=0; index<=4; index++)
//    {
//     cout << "enter the value of arr["<< index <<"]: ";
//     cin >> arr[index];
//     cout<<endl;
//    }
//    for(int index=0; index<=4; index++){
//     cout<<arr[index]<<" ";
//    }




// int arr[]={10,20,30,40,50};
// int sum = 0;
// for(int index=0; index<=4; index=index+1)
// {
//     sum = sum + arr[index];
// }
//    cout << "total sum : "<<sum<<endl;

   



///////////passs array in function-----------------------------------------------------


void printarray(int arr[],int size){
    for(int index=0; index<size; index=index+1)
    cout << arr[index]<<" ";

}

// }

// void multipleof10(int num[] , int size)
// {
//     int count =1;
//     for(int index=0; index<=9; index= index+1){
//         num [index] = 10*count;
//         count++;
//     }
// }

 void flipzrotoone(int arr[],int size){
    for(int index=0; index<size; index=index+1){
        if (arr [index] == 1){
            arr[index]=0;
        }
        else{
        arr[index] = 1;
        }
    }
}
 
int main(){
    // int arr[]={5,10,15,20};
    // int size = 4;
    // printarray(arr , size);

    ////initialise array with 0 
    //  int arr[5]={0,0,0,5};
    // int size = 5;
    // printarray(arr , size);


    ///----when no value insert ------
    // int arr[5];
    // int size = 5;
    // printarray(arr , size);

    // int arr[10];
    // int size=10;
    // multipleof10(arr , size );
    //  for(int i=0; i<size; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    //for 1 and zero flip

    int arr[]={1,1,0,0,1,1,1,0};
    int size=8;
    cout<<"before"<<" ";
    printarray(arr , size);
    cout<<endl;

    flipzrotoone(arr,size);

    cout<<"after"<<" ";
    printarray(arr , size);
    cout<<endl;



    return 0;
}