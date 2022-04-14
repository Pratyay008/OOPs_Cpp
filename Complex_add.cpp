// W.A.P. to add two complex numbers by creating objects
#include<iostream>          //  offline lab--- 10/03/2022    
using namespace std;

class complex{                                    // using constructor
    public:
        float real;
        float img;
    complex(float real =0, float img =0){
        this->real=real;
        this->img=img;
    }    

    complex add(complex c1, complex c2){
        complex temp;
        temp.real= c1.real+c2.real; 
        temp.img= c1.img+c2.img; 
        return temp;
    }
};



int main()
{
    float a1, b1, a2, b2;
    cout<<"Enter the real  part of complex no.1 : "<<endl;
    cin>>a1;
    cout<<"Enter the imaginary part of complex no.1 : "<<endl;
    cin>>b1;

    cout<<"Enter the real  part of complex no.2 : "<<endl;
    cin>>a2;
    cout<<"Enter the imaginary part of complex no.2 : "<<endl;
    cin>>b2;

    complex c1(a1,b1);
    complex c2(a2,b2);
    complex c3;
    c3=c3.add(c1,c2);
    if (c3.img<0)
    {
        cout<<"After addition the complex no. is : "<<c3.real<<c3.img<<"j"<<endl;
    }
    else
    {
        cout<<"After addition the complex no. is : "<<c3.real<<" + "<<c3.img<<"j"<<endl;
    }
    
    

    return 0;
}

