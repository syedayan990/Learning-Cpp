// for memset values
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){

//     int arr[5];

//     memset(arr, -1, sizeof(arr));

//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }

// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// void setArrayZero(int arr[], int size){

//     memset(arr, -1, size * sizeof(int));

// }

// int main(){

//     int arr[5] = {1,2,3,4,5};

//     setArrayZero(arr, 5);

//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int length = 0;

    while(arr[length] != '\0')
    {
        length++;
    }

    return length;
}

void concatarray(char a[], char b[])
{
    int aIndex = getLength(a);
    int bIndex = 0;

    while(b[bIndex] != '\0')
    {
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }

    a[aIndex] = '\0';
}

int main()
{
    char a[20] = "syed";
    char b[] = "ayan";

    concatarray(a, b);

    cout << "print a: " << a << endl;

    return 0;
}