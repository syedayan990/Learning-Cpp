#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){
//  // accumulate() condition 
    // vector<int> ayan(7);
    // ayan[0]=20;
    //  ayan[1]=30;
    //   ayan[2]=40;
    //    ayan[3]=50;
    //     ayan[4]=60;
    //      ayan[5]=70;
    //       ayan[6]=80;


    //       int totalSum = accumulate(ayan.begin(),ayan.end(),/*any number */90);
    //       cout<<"total sum : "<<totalSum<<endl;






    //  vector<int> ayan1(3);
    // ayan1[0]=2;
    //  ayan1[1]=3;
    //   ayan1[2]=4;

    //   vector<int> ayan2(3);
    //    ayan2[0]=5;
    //     ayan2[1]=6;
    //      ayan2[2]=7;
          

    //      int ans = inner_product(ayan1.begin(),ayan1.end(),ayan2.begin(),/*any number*/110);
         
    //       cout<<ans<<endl;




    //partial_sum()---------------------------------
    // vector<int> ayan1(4);
    // ayan1[0]=2;
    //  ayan1[1]=3;
    //   ayan1[2]=4;
    //   ayan1[3]=5;
    
    //   vector<int> result(ayan1.size());///is container mai hhum answer store kr rhe h
    //  partial_sum(ayan1.begin(),ayan1.end(),result.begin());
    //   for(int i:result){
    //     cout << i <<endl;
    //   }
 

      //another way to write ----
//       int sum = 0;

// for(int i : ayan1){
//     sum += i;
//     cout << sum << endl;
// }








//iota()-------------------
vector<int> ayan1(6);
iota(ayan1.begin(),ayan1.end(),100);
for(int i : ayan1){
    cout<< i <<endl;

}

    return 0;
}