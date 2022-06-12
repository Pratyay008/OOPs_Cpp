// Show that a friend function and a class can access private members of a class.
#include<bits/stdc++.h>                             //  clg lab ----> Apr 28
using namespace std;

class A{
        int a;
    public:
        A(){
            a=58;
        }
    friend class B;
};

class B{
    public:
        void show(A &a1){
            cout<<"Yes, I can access you, my friend and your code is : "<<a1.a<<endl;
        }
};

int main()
{
    A a1;
    B b1;

    b1.show(a1);

    return 0;
}
