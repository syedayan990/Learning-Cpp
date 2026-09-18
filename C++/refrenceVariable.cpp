// #include<iostream>
// using namespace std;

// int main(){

//    int alpha = 5;

//    // ref vari

//    int &temp = alpha;
//   // cout<<temp<<" ";
//     cout<<alpha<<" ";
//     temp--;
//      cout<<alpha<<" ";
//      temp=alpha*10;
//       cout<<alpha<<" ";
//      alpha++;
//       cout<<<" ";
//     return 0;
// }






//--------------------------->variable vs reference<-----------------


///-----------------------pass by value-----------------------------------------
// #include<iostream>
// using namespace std;




// /////////////////////for intiger value------------------------------
//note---in pass by value  copy is formed

// // void solve(int alpha){
// //     cout<<"inside function : "<<alpha<<endl;
// //     alpha++;
// //     cout<<"inside function : "<<alpha<<endl;
// // }



// // int main(){

// //     int alpha = 5;
// //     cout<<"inside main : "<<alpha<<endl;

// //     solve(alpha);
// //     cout<<"inside main : "<<alpha<<endl;



// /////////////for character ----///////////////////////////////////////////////////////
// //     void solve(char alpha){
// //     cout<<"inside function : "<<alpha<<endl;
// //     alpha++;
// //     cout<<"inside function : "<<alpha<<endl;
// // }



// // int main(){

// //     char alpha = 'k';
// //     cout<<"inside main : "<<alpha<<endl;

// //     solve(alpha);
// //     cout<<"inside main : "<<alpha<<endl;



// // ////////////////////////for string/////////////////////////////////////////////////
// void solve(string alpha){
//     cout<<"inside function : "<<alpha<<endl;
//     alpha[0]='k';
//     cout<<"inside function : "<<alpha<<endl;
// }



// int main(){

//     string alpha = "syedayan";
//     cout<<"inside main : "<<alpha<<endl;

//     solve(alpha);
//     cout<<"inside main : "<<alpha<<endl;


// return 0;

// }






/////////pass by reference-----------------------------------------------
//note in pass by ref copy is not form----------------------------------


// /////////////////////for intiger value------------------------------
// #include<iostream>
// using namespace std;


// void solve(int &beta){
//   cout<<"inside function : "<<beta<<" ";
//   beta++;
//   cout<<"inside function : "<<beta<<" ";

// }

// int main(){


//     int alpha = 5;
//     cout<< "inside main : "<< alpha<<endl;
    
//     solve(alpha);
//     cout<< "inside main : "<< alpha<<endl;




// /////////////for character ----///////////////////////////////////////////////////////
// void solve(char &beta){
//   cout<<"inside function : "<<beta<<" ";
//   beta++;
//   cout<<"inside function : "<<beta<<" ";

// }

// int main(){


//     char alpha = 'j';
//     cout<< "inside main : "<< alpha<<endl;
    
//     solve(alpha);
//     cout<< "inside main : "<< alpha<<endl;





// ////////////////////////for string/////////////////////////////////////////////////
// void solve (string &beta){
//   cout<<"inside function : "<<beta<<" ";
// //   beta[2]='Z';
//      beta="babbar";
//   cout<<"inside function : "<<beta<<" ";

// }

// int main(){


//     string alpha = "syedayan";
//     cout<< "inside main : "<< alpha<<endl;
    
//     solve(alpha);
//     cout<< "inside main : "<< alpha<<endl;



///////pass by ref and val in loop form and if condiotion--------------

#include<iostream>
using namespace std;

void coutOfEvenNum(int arr[] , int size , int &count)
{
      for (int index=0; index<=size; index=index+1)
      {
          if(arr[index] % 2==0)
          {
            count++;
          }
      }
}

int main()
{


    int arr[]={1,2,3,4,5,6,7,8};
    int size = 7;
    int count = 0;

    coutOfEvenNum(arr,size,count);
    cout<<"even numver of array : "<<count<<endl;



    return 0;
}