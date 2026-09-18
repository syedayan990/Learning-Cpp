#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count=0;
    int index=0;
    while(arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void concatarray(char a[],char b[] ){
    int aIndex = getLength(a);
    int bIndex = 0;
    while(b[bIndex] != '\0'){
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;


    }
    //end a string with null character
    a[aIndex ]='\0';

}

int main(){

   

    //declare
//     char arr[10]="syedayan";


//    cout<<arr[4]<<endl;
//    cout << "printing the value of 8th"<<arr[8]<< endl;
//    int asciivalue = arr[8];
//    cout << asciivalue <<endl;
   
//importan-------------------------
// int arr[4]={1,2,3,4};
// cout << arr <<endl;

// char brr[]="syed ayan";
// // cout << brr<< endl;
// // cout << brr[4]<< endl;
// /////////////////////////////////with loop ---------
// for (int i=0; i<=8; i++){
//     cout << brr[i]<<"";
// }


// char arr[]="syed ayan";
// cout<<getLength(arr)<<" ";


////part of concatinate
    // char a[50]="syed";
    // char b[50]="ayan";
    // concatarray(a,b);
    // cout<< "print a"<<a << " ";

    return 0;
}