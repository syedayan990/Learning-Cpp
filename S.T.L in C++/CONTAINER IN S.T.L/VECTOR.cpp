#include<iostream>
#include<vector>
using namespace std;

int main(){

// ///////////creation a vector--------------------
// vector<int> marks;
// //////////creation a vector with size--------------------
// vector<int>ayan(10);
// /////////creation a vector with size and initialistion of value--------------------
// vector<int>sheenam(15 ,0);



/////1--->member function 1-begin()------------------
 /*vector<int> marks(5 , 2);
 cout<<*(marks.begin())<<endl;*/


///// 2---->member function 2-end()------------------
/*vector<int> marks1(3  , 4);
 cout<<*(marks1.end()-1)<<endl;*/

//// 3---->member function 3-push_back()------------------
/*vector<int> marks;
marks.push_back(10);
marks.push_back(20);
marks.push_back(30);
marks.push_back(40);

cout<<*(marks.begin())<<endl;
cout<<*(marks.end()-1)<<endl;*/


/// 4---->member function 4-pop_back()------------------
/*vector<int> marks;
marks.push_back(10);
marks.push_back(20);
marks.push_back(30);
marks.push_back(40);
marks.pop_back();
marks.pop_back();
marks.pop_back();



cout<<*(marks.begin())<<endl;
cout<<*(marks.end()-1)<<endl;*/


/////////5--->member function 5-size()  for access size of element
/*vector<int> marks;
marks.push_back(10);
marks.push_back(20);
marks.push_back(30);
marks.push_back(40);

cout<<marks.size()<<endl;

vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

marks1.pop_back();
marks1.pop_back();


cout<<marks1.size()<<endl;*/


////////6--->member function 6-front() access first element
/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

marks1.pop_back();

cout << marks1.front()<<endl;*/

///////7--->member function 7-back()---for access last element

/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

marks1.pop_back();


cout << marks1.back()<<endl;*/


//////8--->member function 8-empty()---for check vector is empty os not 
/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

if(marks1.empty() == true){
    cout<<"vector is empty : "<<endl;
}
else{
    cout<<"vector is not empty : "<<endl;
}*/


////9--->member function 9-operators()-
/*vector<int> marks1(20);
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

marks1[0]=100;
cout << marks1[0]<<endl;
cout << marks1[1]<<endl;
cout << marks1[2]<<endl;
cout << marks1[3]<<endl;*/



///10--->member function 10----at()
/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);

cout << marks1.at(0)<<endl;
cout << marks1.at(1)<<endl;
cout << marks1.at(2)<<endl;
cout << marks1.at(3)<<endl;*/


///11--->member function 11----capacity()--for find the max capacity of vector
/*vector<int> marks1;
marks1.push_back(10);///output will be - 1
marks1.push_back(20);///output will be - 2
marks1.push_back(30);///output will be - 4
marks1.push_back(40);///output will be - 4
marks1.push_back(50);///output will be - 8
marks1.push_back(60);///output will be - 8
marks1.push_back(70);///output will be - 8
marks1.push_back(80);///output will be - 8
marks1.push_back(90);///output will be - 16*/


//12--->member function 12---reserve()--for fix the size od vector

/*vector<int> marks1;
marks1.reserve(12);///---here we reserve the value of vector

marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);
marks1.push_back(50);
marks1.push_back(60);


cout << marks1.capacity()<<endl;*/


//13--->member function 13---max_size()--
/*vector<int> marks1;
cout << marks1.max_size();*/


//14--->member function 14---clear()--for clear all the element
/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);
marks1.push_back(50);
marks1.push_back(60);
marks1.push_back(70);
marks1.push_back(80);
marks1.push_back(90);
marks1.clear();
cout<<endl;*/



//15--->member function 15----insert()--for insert an element in the vector

/*vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);
marks1.insert(marks1.begin(),50);

cout << marks1.size()<<endl;
cout<<marks1[0]<<endl;/// is position pr 50 insert ho gya 
*/

//16--->member function 16----erase()--for erase an element in the vector
/*  vector<int> marks1;
marks1.push_back(10);
marks1.push_back(20);
marks1.push_back(30);
marks1.push_back(40);
marks1.insert(marks1.begin(),50);

cout << marks1.size()<<endl;

marks1.erase(marks1.begin(),marks1.end());
cout << marks1.size()<<endl;  */


//17--->member function 17----swap()--

/*vector<int>first;
vector<int>second;

first.push_back(10);
first.push_back(15);
first.push_back(20);
first.push_back(25);

second.push_back(100);
second.push_back(200);
second.push_back(300);
second.push_back(400);
*/

// first.swap(second);
// cout<<first[0]<<" "<< first[1]<<" "<<first[2]<<" "<<first[3]<<endl;

// //printing with the help of for each loop
// for(int i:first){
//     cout<<i<<" ";
// }
// for(int i:second){
//     cout<<i<<" ";
// }

//creating an itrator

// vector<int>::iterator it = first.begin();
// while(it != first.end()){
//     cout<<*it<<" ";
//     it++;
// }




//////lets create a 2D vector ------------------------------------------------
//it is a 2D vector with 3 roows and 4 coloums initialise value '0'---------
// vector<vector<int>>ayan(3 , vector<int>(4 , 0));
// int totalrows = ayan.size();
// int totalcoloums = ayan[0].size();

// cout<<"total number of rows : "<<ayan.size()<<endl;
// cout<<"total number of coloums : "<<ayan[0].size()<<endl;




/////lets create a 2D jurk vector ------------------------------------------------

vector<vector<int>>ayan(4);
ayan[0]=vector<int>(4);
ayan[1]=vector<int>(2);
ayan[2]=vector<int>(5);
ayan[3]=vector<int>(2);

cout<<"total number of rows : "<<ayan.size()<<endl;
 cout<<"total number of coloums : "<<ayan[0].size()<<endl;
  cout<<"total number of coloums : "<<ayan[1].size()<<endl;
   cout<<"total number of coloums : "<<ayan[2].size()<<endl;
    cout<<"total number of coloums : "<<ayan[3].size()<<endl;

return 0;
}