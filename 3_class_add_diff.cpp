// 1.Complex class , user data----> 2.derive class add no. ----> 3.third calss , difference b/w base 
// complex no. & its own complex no.
#include<iostream>                         //  clg lab ----> Apr 28
using namespace std;

class Base{
    public:
        float img;
        float real;
        Base(){
            real=0.0;
            img=0.0;
        }   
        Base(float real, float img){
            this->real=real;
            this->img=img; 
        }   
};

class Add:public Base{
    public:    
        float real;
        float img;
        Add(){
            real=0.0;
            img=0.0;
        }  
        Add(float real, float img){
            this->real=real;
            this->img=img; 
        }  
        Add sum_add(Base x, Add y){
            Add temp;
            temp.real = x.real + y.real;
            temp.img = x.img + y.img;
            return temp;
        } 
    void showdata1(){
        if (img<0)
        {
            cout<<"After addition the complex no. is : "<<real<<img<<"i"<<endl;
        }
        else
        {
            cout<<"After addition the complex no. is : "<<real<<"+"<<img<<"i"<<endl;
        }    
    }
    friend class Difference;
};


class Difference{
    public:
        float real;
        float img;
        Difference(){
            real=0.0;
            img=0.0;
        }   
        Difference(float real, float img){
            this->real=real;
            this->img=img; 
        }  
        Difference sum_diff(Base x, Difference y){
            Difference temp;
            temp.real = x.real - y.real;
            temp.img = x.img - y.img;
            return temp;
        } 
    void showdata2(){
        if (img<0)
        {
            cout<<"After substraction the complex no. is : "<<real<<img<<"i"<<endl;
        }
        else
        {
            cout<<"After substraction the complex no. is : "<<real<<"+"<<img<<"i"<<endl;
        }   
    }     
};


int main()
{
    float a,b;
    cout<<"Enter the real & imaginary part of Base complex no. :"<<endl;  
    cin>>a>>b;
    Base b1(a,b);

    Add a1(4.5,5.8);
    Add a2;
    a2=a2.sum_add(b1, a1);
    a2.showdata1();

    Difference d1(2.3,8.4);
    Difference d2;
    d2=d2.sum_diff(b1, d1);
    d2.showdata2();
    
        
    return 0;
}
