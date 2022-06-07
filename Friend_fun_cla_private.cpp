// Show that a friend function and a class can access private members of a class.
#include<iostream>                         //  clg lab ----> Apr 28
using namespace std;

class a1{
    private:
        int a;
    public: 
        a1(){
            a=95;
        }   

    friend class b1;        
};

class b1{
    public: 
       void show(a1 &x){
           cout<<"The value is : "<<x.a<<endl;
       };
           
};

int main()
{
    a1 ob1;
    b1 ob2;
    ob2.show(ob1);

    return 0;
}

