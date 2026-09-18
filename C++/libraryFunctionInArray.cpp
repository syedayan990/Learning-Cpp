// #include<iostream>
// using namespace std;

// int getLength(char arr[]){
//     int count=0;
//     int index=0;
//     while(arr[index] != '\0')
//     {
//         count++;
//         index++;
//     }
//     return count;
// }

// void concatarray(char a[],char b[] ){
//     int aIndex = getLength(a);
//     int bIndex = 0;
//     while(b[bIndex] != '\0'){
//         a[aIndex] = b[bIndex];
//         aIndex++;
//         bIndex++;


//     }
//     //end a string with null character
//     a[aIndex ]='\0';

// }


// void copyarr(char acturalarr[], char copyarr[]){
//     int aIndex = 0;
//     int bIndex = 0;

//     while (acturalarr[aIndex] != '\0'){
//     // start copying ---------------------------------
//     copyarr[bIndex]=acturalarr[aIndex];
//     aIndex++;
//     bIndex++;

//     }

// copyarr[bIndex]='\0';
// }

// bool comparison(char a[],char b[]){

//      int aIndex = 0;
//      int bIndex = 0;
//      int alenght = getLength(a);

//      while ( aIndex <= alenght ){
//         if (a[aIndex] != b[bIndex])
//        {
//          return false;
//     }
// else {
//     aIndex++;
//     bIndex++;
// }

//    }
//    ///////////////// if we comple loop then return false
//    return true;
// }


// int main(){


//     char arr[]="syedayanm";
//     char brr[]="syedayan";

//     cout << " print comparison array : "<< comparison(arr,brr)<<" ";




//     return 0;
// }





 #include<iostream>
 #include<cstring>
 using namespace std;


 int main (){


    char actual[]="syed ayan";
    char ans[100];
    cout<<"print the length of : "<< strlen(actual)<<" ";
   
    ////////////////////this library use for copy---------------------------------
    
    strcpy ( ans , actual );
     cout << ans << " ";   
     ans[0]='k';//------->for not same condition because the first value of syed ayan change with 'k'
 
     if(strcmp(ans , actual)==0){
        cout<< "char arrays are same"<< endl;
     }
     else{
        cout<< "char arrrys are not same"<<endl;
     }


    return 0;

 }

 /////////////strcat will be done by ourself------------------------
