#include<iostream>
#include<queue>
using namespace std;


int main(){

   ///creation of queue 
//    queue<int> ayan;

//    // insertion in queue and push and  size() od queue
//    ayan.push(10);
//      ayan.push(20);
//        ayan.push(30);
//          ayan.push(40);
           

//          cout<<ayan.size()<<endl;







///////clear() condition
//   queue<int> ayan;
//    ayan.push(10);
//      ayan.push(20);
//        ayan.push(30);
//          ayan.push(40);
           
    
//          cout<<ayan.size()<<endl;
//               ayan.clear(); ///--- mean queue mai koi clear method nhi hota 



// /////pop() condition --- pop always start from front
//   queue<int> ayan;
//    ayan.push(10);
//      ayan.push(20);
//        ayan.push(30);
//          ayan.push(40);

//          ayan.pop();
//         cout<<ayan.size()<<endl;








// /////empty() condition --- 
//   queue<int> ayan;
//    ayan.push(10);
//      ayan.push(20);
//        ayan.push(30);
//          ayan.push(40);

//          ayan.pop();
//         cout<<ayan.size()<<endl;

//         if(ayan.empty()==true){
//             cout<<"queue is not empty : "<<endl;
             
//         }
//         else{
//             cout<<"queue is empty : "<<endl;
//         }






// ////front() and back() condition --- 
//   queue<int> ayan;
//    ayan.push(10);
//      ayan.push(20);
//        ayan.push(30);
//          ayan.push(40);

//       cout<<ayan.front()<<endl;
//           cout<<ayan.back()<<endl;





///swap() condition --- 
  queue<int> ayan1;
   ayan1.push(10);
     ayan1.push(20);
       

         queue<int> ayan2;

    ayan2.push(100);
     ayan2.push(200);
      

   ayan1.swap(ayan2);

   cout<<ayan1.front()<<" "<<ayan1.back()<<" ";
   cout<<ayan2.front()<<" "<<ayan2.back()<<" ";
         



    return 0;
}