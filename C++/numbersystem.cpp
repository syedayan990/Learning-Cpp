#include<iostream>
using namespace std;

int decimaltobinarymethod(int n){

    while(n > 0)
    {
        int bit = n % 2;
        cout << bit;
        n = n / 2;
    }

    return 0;
}

int main(){

    int n;
    cin >> n;
 
    decimaltobinarymethod(n);

}