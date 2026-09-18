#include<iostream>
using namespace std;

int main(){

    //------------------------------------------>declare<-------------------------
    // string name; 
    // name.push_back('a');
    // name.push_back('b');
    // name.push_back('c');
    // cout<<name<<endl;


     
    
    //------------------------------->this check with char array<----------------
    // char arr[100];
    // arr[0]='a';
    // arr[1]='b';
    // arr[2]='c';
    // cout<<arr<<endl;


    //---------------------------------->initialisation<-----------------------
    // string surname ="syed ayan";


     //---------------------------------->updation<-----------------------

    //  surname = "sheenam";




    ///------------------------------->library function for string<------------------------
   ///------------------------------->for string length<-----------------------------------
    // string str ="syed ayan";
    // string temp="sheenam";
    // cout<< "length : "<<str.length()<<endl;



    ///------------------------------->for str.append<-----------------------------------
    // str.append(temp);
    // cout << str << " ";


    ///------------------------------->for  str.insert<-----------------------------------
    // str.insert(0,temp);
    // cout << str << " ";


    //------------------------------->for  str.substr<-----------------------------------
    // cout<<temp.substr(3,3)<<" ";


    //------------------------------->for  str.compare<-----------------------------------
    // if(str.compare(temp)==0){
    //     cout<<" string is equal : "<<" ";

    // }
    // else{
    //     cout<<"string is not equal : "<<" ";
    // }




     //------------------------------->for  str.compare<-----------------------------------

     string str ="i am syed ayan and sheenam is my sister";
     // 19 indexc--> s
     //string temp="sheenam";
     string temp="shenam";
    //  cout<< str.find(temp)<<endl;
   size_t  ans =  str.find(temp);
    //    cout<<ans<<" ";

   if(ans == string::npos){

    cout<<"string not found in this"<<" ";


   }
   else{
    cout<<"found :"<<" ";

   }
    


    return 0;
}