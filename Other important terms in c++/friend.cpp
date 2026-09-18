//////////////////// Friend --- do class ko ek dusre ka friend bna deta h 
#include<iostream>
using namespace std;

class Apple{

    private: 
    int alpha;

    public:


    Apple(int _val) : alpha(_val){};

    int getApple() const
    {
        return alpha;
    }

    void setApple(int _val){
        alpha=_val;
    }

///yaha (friend) do class ko ek dusre ka friend bna raha he 
friend class Lion;
///// or yaha (frined) do function ko ek dusre ko friend bna raha he 
friend void print(const Apple&beta);
};

class Lion{
public:
void print(const Apple&beta)
{
   //cout<<beta.getApple()<<endl;
   cout<<beta.alpha<<endl;
}

};
void print(const Apple&beta){
    cout<<beta.alpha<<endl;
}

int main(){

Apple a(5);
Lion b;
b.print(a);
b.print(a);
print(a);
    return 0;
}