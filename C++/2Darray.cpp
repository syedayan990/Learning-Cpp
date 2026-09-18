#include<iostream>
using namespace std;


//int main(){
    
   //int arr [5][4];    //----------------declaration

   //------initialisation-------------------------------------//
//    int arr[2][4]={{1,2,3,4},
//                   {5,6,7,8}};
//    ///how to access any number in array 
//     cout << arr[1][2]<<" ";



// how to access full 2d array


///here we give input --------------------------------------------------
// int arr[3][4]={{12,14,16,18},
//            {10,20,30,40},
//            {22,25,29,35}};

// int row = 3;
// int col =4;

// //printing
// for(int row_index=0; row_index<=row-1; row_index=row_index+1)
// {
//     for (int col_index=0; col_index<=col-1; col_index=col_index+1){
//         cout<< arr[row_index] [col_index]<<" ";
//     }
//     cout<<endl;


// }
    ////here we need  input----------------------------------------------------
//      int arr[3][4];//={{12,14,16,18},
//     //        {10,20,30,40},
//     //        {22,25,29,35}};

// int row = 3;
// int col = 4;

// //printing
// for(int row_index=0; row_index<=row-1; row_index=row_index+1)
// {
//     for (int col_index=0; col_index<=col-1; col_index=col_index+1){
//         cout<< "enter the value of arr["<<row_index<<"]["<<col_index<<"]:";
//         cin>> arr[row_index] [col_index];
        
//     }
//     cout<<endl;
// }
//       cout << "the value of 2d array\n"<<" ";
//      for(int row_index=0; row_index<=row-1; row_index=row_index+1)

// {
   
//     for (int col_index=0; col_index<=col-1; col_index=col_index+1){
       
//         cout<< arr[row_index] [col_index]<<" ";
//     }
//     cout<<endl;



// }





//--------how to pass fucntion in 2d array------------------------------



//     return 0;
// }


//--------how to pass fucntion in 2d array------------------------------



void print2array(int arr[][4],int rowSize, int colSize)
{
    cout << "printng thearray"<< endl;
     for(int row_index=0; row_index<=rowSize-1; row_index=row_index+1)
{
    for (int col_index=0; col_index<=colSize-1; col_index=col_index+1){
        cout<< arr[row_index] [col_index]<<" ";
    }
    cout<<endl;
}
}

int main()
{
    int arr[3][4];

     int row = 3;
     int col = 4;

    for(int row_index=0; row_index<row; row_index++)
{
    for (int col_index=0; col_index<col; col_index++){
        cout<< "enter the value of arr["<<row_index<<"]["<<col_index<<"]:";
        cin>> arr[row_index] [col_index];
        
    }
    cout<<endl;
}
   print2array(arr, row , col);

    return 0;
}