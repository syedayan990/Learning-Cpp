////////////////////////copying char array practice--------///////////////////////////////////



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
// int main(){
      
//     char acturalarr[100]="syed ayan";
//     char ans[100];

//     copyarr(acturalarr,ans);
//      cout << "printing = "<<ans<<" ";



//     return 0;
// }




////////////////////////copying comparison array practice--------////////////////////////////////


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


void copyarr(char acturalarr[], char copyarr[]){
    int aIndex = 0;
    int bIndex = 0;

    while (acturalarr[aIndex] != '\0'){
    // start copying ---------------------------------
    copyarr[bIndex]=acturalarr[aIndex];
    aIndex++;
    bIndex++;

    }

copyarr[bIndex]='\0';
}

bool comparison(char a[],char b[]){

     int aIndex = 0;
     int bIndex = 0;
     int alenght = getLength(a);

     while ( aIndex <= alenght ){
        if (a[aIndex] != b[bIndex])
       {
         return false;
    }
else {
    aIndex++;
    bIndex++;
}

   }
   ///////////////// if we comple loop then return false
   return true;
}


int main(){


    char arr[]="syedayanm";
    char brr[]="syedayan";

    cout << " print comparison array : "<< comparison(arr,brr)<<" ";




    return 0;
}