#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
using namespace std;

void printdouble(int a)
{
    cout<< 2*a << endl;
}
bool checkEven(int a){
    return a%2 == 0;
    
}

 int main(){

//    vector<int> ayan(5);
//    ayan[0] = 11;
//     ayan[1] = 20;
//      ayan[2] = 30;
//       ayan[3] = 40;
//        ayan[4] = 50;


//     // for_each() condition---------------------------
//     cout<<"for_each contion : "<<endl;
//     for_each(ayan.begin(),ayan.end(),printdouble);

//     int target = 40;
//     cout << endl;




//     //////////////find() condition------------------------
//     cout<<"find() contion : "<<endl;
// //    auto it = find(ayan.begin(),ayan.end(),target);
//                  //or
//   vector<int>::iterator it = find(ayan.begin(),ayan.end(),target);

//    cout<< *it <<endl;
//    cout<<endl;



//    ////////////find_if() condition------------------
//    cout<<"find_if() contion : "<<endl;
//   /// auto it = find_if(ayan.begin(),ayan.end(),checkEven);
//   ///////////or
//   vector<int>::iterator syed = find_if(ayan.begin(),ayan.end(),checkEven);
//     cout<< *syed <<endl;




//////count()----------------
// vector<int> ayan(5);
//    ayan[0] = 11;
//     ayan[1] = 20;
//      ayan[2] = 30;
//       ayan[3] = 11;
//        ayan[4] = 11;

    //    cout<<"total count of any number : "<<endl;
    //     int target  = 11;
    //   int ans = count(ayan.begin(),ayan.end(),target);
    //    cout << ans << endl;

    //   cout<<"total count of even number : "<<endl;
    //    int ans1 = count_if(ayan.begin(),ayan.end(),checkEven);
    //    cout<<ans1<<endl;







//     /////sort() and reverse()--------------------------------------

//     vector<int> ayan(5);
//    ayan[0] = 11;
//     ayan[1] = 30;
//      ayan[2] = 23;
//       ayan[3] = 110;
//        ayan[4] = 9;

       //sorting on iterator begin() to end()---------------
//        sort(ayan.begin(),ayan.end());
//        cout<<"sorting on iterator begin() to end() : "<<endl;
//   for (int i:ayan){
//     cout<<i <<endl;
//   }
//    cout<< endl;



//    //sorting on some elemnts --------------------------
//    sort(ayan.begin(),ayan.begin()+3);
//    cout<<"sorting on some elemnts : "<<endl;
//     for (int i:ayan){
//     cout<<i <<endl;
//   }
//    cout<< endl;




//    //reverse on iterator begin() to end()---------------
//   reverse(ayan.begin(),ayan.end());
//   cout<<"reverse on iterator begin() to end() : "<<endl;
//   for (int i:ayan){
//     cout<<i <<endl;
//   }
// cout<<endl;




// // //reversion condition on some elemnt 
// reverse(ayan.begin(),ayan.begin()+4);
// cout<<"reversion condition on some elemnt : "<<endl;
//   for (int i:ayan){
//     cout<<i <<endl;
//   }




//////example for practice only------------
//cout<<"example for practice only : "<<endl; 
// string a = "ayan";


// reverse(a.begin(),a.end());
// cout<<a<<endl;








//rotation()-----------------------
// vector<int> ayan(6);//yaha hum jitne elemnt number dalege utne neeche print hoge
//    ayan[0] = 10;
//     ayan[1] = 20;
//      ayan[2] = 30;
//       ayan[3] = 40;
//        ayan[4] = 50;
//        ayan[5]=60;

//  for(int i:ayan){
//         cout<<"before rotating: "<<i<<endl;
//        }
//        cout<<endl;
//        rotate(ayan.begin(),ayan.begin()+3,ayan.end());
//        for(int i:ayan){
//         cout<<"rotation value of vector : "<<i<<endl;
//        }






       //unique element()-------------------------
//        vector<int> ayan(6);//yaha hum jitne elemnt number dalege utne neeche print hoge
//    ayan[0] = 20;
//     ayan[1] = 20;
//      ayan[2] = 40;
//       ayan[3] = 40;
//        ayan[4] = 60;
//        ayan[5]=60;

//       vector<int>::iterator it = unique(ayan.begin(),ayan.end());
//        ayan.erase(it , ayan.end());
//         for(int i:ayan){
//          cout<<i<<endl;
//         }

        //another methhod with set---------------------------
    // vector<int> ayan = {20,20,40,40,60,60};

    // set<int> s(ayan.begin(), ayan.end());

    // for(int i : s){
    //     cout << i << endl;
    // }






    /////partion()--------------------------
       vector<int> ayan(6);//yaha hum jitne elemnt number dalege utne neeche print hoge
   ayan[0] = 10;
    ayan[1] = 11;
     ayan[2] = 12;
      ayan[3] = 13;
       ayan[4] = 14;
       ayan[5]=15;

    

    // partition for iterator begin to end
    // partition(ayan.begin(),ayan.end(),checkEven);
    // cout<<"partition for iterator begin to end : "<<endl;
    //     for(int i : ayan){
    //     cout << i << endl;
    // }
 

    //partition for element
    partition(ayan.begin(),ayan.begin()+3,checkEven);
    cout<<"partition for element : "<<endl;
       for(int i : ayan){
        cout << i << endl;
    }
 

    return 0;
}